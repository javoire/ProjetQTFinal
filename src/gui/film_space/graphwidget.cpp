
#include "graphwidget.h"
#include "filmnode.h"
#include "node.h"

#include <QtGui>
#include <QPixmap>
#include <QPropertyAnimation>
#include <sstream>
#include <QLabel>
#include <math.h>
#include <iostream>
#include "controller/filminterfacemanager.h"
#include "controller/genreinterfacemanager.h"
#include "model/manager/filmmanager.h"
using namespace std;

static int BLOCK_INDEX = 0;
const static int NUM_NODES_MAX = 500;
const static int NUM_TOTAL_FILMS = FilmManager::instance()->list().size();

GraphWidget::GraphWidget(QWidget *)
{
    Node *help_me = new Node(this);
    help_me->setGeometry(640, 10, 30, 30);

    for (int i = 0; i < NUM_NODES_MAX; ++i) {

        FilmNode *f = new FilmNode(this, 0);
        filmNodes.push_back(f);
    }
    n = 0;
}

void GraphWidget::addGenreNode(GenreNode* n){
    genresList.push_back(n);
}

void GraphWidget::createGenreCircle(){
    // Circle of Genres

    for (int i = 0; i < genresList.size(); i++) {

        float angle = 2*i*M_PI/genresList.size();

        genresList.at(i)->setAngle(angle);

    }
}

void GraphWidget::addFilmNode(FilmNode* ){

}

void GraphWidget::createNodesDistribution(CategoryResult::Ptr packet) {

    float angle = 0.f, arch = 0.f, x = 0.f, y = 0.f;
    int r = 0, g = 0, b = 0, color_factor = 0;
    string genresListText = "";

    CategoryResult::GenreList genres = packet->genres();

    int num_nodes = min((int)NUM_NODES_MAX, (int)CategoryResult::numberOfResults());
    long num_nodes_cat = (num_nodes * packet->percentage());
    if(num_nodes_cat > 0){

        for (CategoryResult::GenreList::iterator it(genres.begin()); it != genres.end(); ++it) {

            Genre & genre = **it;
            GenreNode& genreNode = genre.interface()->genreNode();
            genresListText.append(genre.name());
            genresListText.append("\n");

            // POSITION
            angle += genreNode.angle();
            arch += genreNode.arch();
            // COLOR
            r += genreNode.color().red();
            g += genreNode.color().green();
            b += genreNode.color().blue();
            ++color_factor;
        }

        angle /= genres.size();
        arch /= genres.size();
        if(color_factor > 0){
            r /= color_factor;
            g /= color_factor;
            b /= color_factor;
        }


        float radius = packet->yearBlock() * 45.f + 5.f;
        float angleNoise, radiusNoise;

        for (int i = 0; i < (int)(num_nodes * packet->percentage()); ++i) {

            angleNoise = (float)drand48() * 0.2;
            radiusNoise = (float)drand48() * 60;

            x = 340 + (radius + radiusNoise) * (float)cos(angle + angleNoise);
            y = 240 + (radius + radiusNoise) * (float)sin(angle + angleNoise);

            FilmNode & filmNode = *filmNodes[n];
            filmNode.setVisible(true);
            ++n;

            if (num_nodes < NUM_NODES_MAX) {

                filmNode.setMinDiameter(30);
                filmNode.setDiameter(30);
                filmNode.setMaxDiameter(50);
                filmNode.setGeometry(x, y, 30, 30);
            }
            else {

                filmNode.setMinDiameter(8);
                filmNode.setDiameter(8);
                filmNode.setMaxDiameter(25);
                filmNode.setGeometry(x, y, 10, 10);
            }
            filmNode.setColor(QColor(r, g, b, 125));
            filmNode.setCategoryIndex(BLOCK_INDEX);

            /*filmNode.show();
            QPropertyAnimation animation(&filmNode, "geometry");
            animation.setDuration(1000);
            animation.setStartValue(QRect(x, y, 0, 0));
            animation.setEndValue(QRect(x, y, 10, 10));

            animation.setEasingCurve(QEasingCurve::OutBounce);

            animation.start();*/

        }
        categories.push_back(packet);
        BLOCK_INDEX++;

        std::ostringstream oss;

        int yearBegin = 1888+30*packet->yearBlock();
        int yearEnd = min(yearBegin + 30, 2012);

        oss << "(" << yearBegin << "-" << yearEnd << ")\n" << packet->categoryCount() << " film(s)";
        genresListText.append(oss.str());

        QLabel *label = new QLabel(this);

        // LABEL STYLE
        QString css_color("color : rgb(");
        css_color.append(QString::number(r));
        css_color.append(",");
        css_color.append(QString::number(g));
        css_color.append(",");
        css_color.append(QString::number(b));
        css_color.append(");");

        QString css_border_color("border-color : rgb(");
        css_border_color.append(QString::number(r));
        css_border_color.append(",");
        css_border_color.append(QString::number(g));
        css_border_color.append(",");
        css_border_color.append(QString::number(b));
        css_border_color.append(");");

        QString css_bg_color("background-color : rgba(");
        css_bg_color.append(QString::number(r));
        css_bg_color.append(",");
        css_bg_color.append(QString::number(g));
        css_bg_color.append(",");
        css_bg_color.append(QString::number(b));
        css_bg_color.append(",100);");

        QString css("QLabel { border-radius: 8px; padding: 5px;border-width:1px;border-style:none;");
        css.append(css_color);
        css.append(css_bg_color);
        css.append(css_border_color);
        css.append("}");
        label->setStyleSheet(css);
        label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
        label->setText(QString::fromUtf8(genresListText.c_str()));
        label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
        label->setVisible(false);
        labels.push_back(label);

    }
}

void GraphWidget::updateDistribution(CategoryResult::List list) {


    foreach(QLabel * label, labels){
        label->setVisible(false);
    }

    BLOCK_INDEX = 0;
    labels.clear();
    categories.clear();
    n = 0;

    foreach(FilmNode * filmNode, filmNodes){
        filmNode->setVisible(false);
    }


    for (CategoryResult::List::iterator it(list.begin()); it != list.end(); ++it) {

        createNodesDistribution(*it);
    }
}

void GraphWidget::paintEvent(QPaintEvent *) {

}

void GraphWidget::showCategoryInfo(int categoryId) {

    CategoryResult::Ptr packet = categories[categoryId];
    emit showCategory(packet);
}
