#ifndef FILMSPACEUPDATER_H
#define FILMSPACEUPDATER_H

#include <QObject>
#include <list>
#include <map>
#include "gui/film_space/graphwidget.h"

#include "controller/filmfilter.h"
#include "filminterfacemanager.h"
#include "genreinterfacemanager.h"
#include "common/singleton.h"
#include "categoryresult.h"

class GraphWidget;
class FilmSpaceUpdater : public QObject, public Singleton<FilmSpaceUpdater>
{
    Q_OBJECT
    friend class Singleton<FilmSpaceUpdater>;
public:
    typedef std::list<GenreInterface::Ptr> GenreListType;
    void setSpaceWidget(GraphWidget* graph) { graph_ = graph; }
private:
    FilmSpaceUpdater();
    GenreListType selectedGenres_;
    GraphWidget *graph_;
    long numberGenresUnselected_;
public slots:
    void updateName(QString name);
    void updateYearLow(int year);
    void updateYearHigh(int year);
    void updateGenre(bool checked, QString genre);
    void updateInterfaces();
};

#endif // FILMSPACEUPDATER_H
