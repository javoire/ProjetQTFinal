#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QtGui/QGraphicsView>
#include <QMap>
#include <QLabel>
#include <vector>
#include <string>


class GraphWidget;
#include "genrenode.h"
#include "filmnode.h"
#include "controller/categoryresult.h"

class Node;

class GraphWidget : public QWidget
{
    Q_OBJECT

public:
    GraphWidget(QWidget *parent = 0);

    void addGenreNode(GenreNode* n);
    void createGenreCircle();
    void addFilmNode(FilmNode* n);
    void createNodesDistribution(CategoryResult_Ptr packet);
    void updateDistribution(CategoryResult_List list);
    void showCategoryInfo(int categoryId);

    vector<QLabel*> labels;

protected:
    void paintEvent(QPaintEvent *event);

private:
    int timerId, n;
    Node *centerNode;
    QList<GenreNode *> genresList;
    QGraphicsScene *scene;
    vector<FilmNode*> filmNodes;
    vector<CategoryResult_Ptr> categories;
signals:
    void showCategory(CategoryResult*);
};

#endif
