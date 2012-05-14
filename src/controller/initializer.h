#ifndef INITIALIZER_H
#define INITIALIZER_H

#include "common/singleton.h"
#include "gui/film_space/graphwidget.h"
#include "gui/form/filterform.h"

class Initializer: public Singleton<Initializer>
{
    friend class Singleton<Initializer>;
public:
    void initFilmInterfaces(FilterForm& w);
    void initGenreInterfaces(FilterForm& w);
    void initCategoryResults();
    void initNodes(GraphWidget *widget);
private:
    Initializer();
};

#endif // INITIALIZER_H
