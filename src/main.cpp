#include <QtGui/QApplication>

#include <iostream>

#include "db/database.h"
#include "controller/initializer.h"

#include "gui/film_space/graphwidget.h"

#include "gui/form/filterform.h"

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    FilterForm w;

    cout << "creating film space widget... " << endl;
    GraphWidget * widget;
    cout << "OK!" << endl;

    widget = w.getFilmSpace();

    // List all films and their genres
    cout << "Getting films... " << endl;
    loadDb();
    cout << "OK!"<< endl;

    Initializer& init = *Initializer::instance();

    cout << "Creating interfaces... " << endl;
    // Create an interface for each film
    init.initFilmInterfaces(w);

    // Create genre interfaces
    init.initGenreInterfaces(w);
    cout << "OK!" << endl;
    cout << "Creating nodes (GUI)... " << endl;

    // Create categories
    init.initCategoryResults();

    // Initialize the gui nodes
    init.initNodes(widget);
    cout << "OK! (GUI)" << endl;


    w.show();
    return a.exec();

}
