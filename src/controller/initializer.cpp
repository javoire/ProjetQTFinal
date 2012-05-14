#include "initializer.h"

#include <iostream>

#include "model/manager/filmmanager.h"
#include "controller/filminterfacemanager.h"

#include "model/manager/genremanager.h"
#include "controller/genreinterfacemanager.h"

#include "controller/filmspaceupdater.h"

#include "controller/categoryresult.h"

#include "gui/form/filterform.h"

Initializer::Initializer()
{}

using namespace std;

void Initializer::initFilmInterfaces(FilterForm&){

    FilmManager& fm = *(FilmManager::instance());
    FilmManager::ListType& fl = fm.list();

    FilmInterfaceManager& fim = *(FilmInterfaceManager::instance());


    for(FilmManager::ListType::iterator f_it(fl.begin()); f_it != fl.end(); ++f_it){
        Film::Ptr& f_ptr = (*f_it);
        FilmInterface::Ptr fint_ptr = FilmInterface::Ptr(new FilmInterface(f_ptr));
        f_ptr->interface(fint_ptr);
        fim.add(fint_ptr);
        fim.map(fint_ptr, f_ptr->id());
        fint_ptr->genreLevel(0);


    }
}

void Initializer::initGenreInterfaces(FilterForm& w){

    long genreId = 0;

    GenreInterfaceManager& gim = *GenreInterfaceManager::instance();
    GenreManager& gm = *GenreManager::instance();
    GenreManager::ListType& gl = gm.list(); // get list of genres
    //w.addGenre(QString::fromStdString(GenreInterface::NONE_GENRE));

    for(GenreManager::ListType::iterator g_it(gl.begin()); g_it != gl.end(); ++g_it){
        Genre::Ptr& g_ptr = *(g_it); // get genre reference
        GenreInterface::Ptr gint_ptr = GenreInterface::Ptr(new GenreInterface(g_ptr, genreId)); // create genre interface
        g_ptr->interface(gint_ptr);
        gim.add(gint_ptr); // add this interface to the manager
        gim.map(gint_ptr, gint_ptr->genre().name()); // map it into the manager
        w.addGenre(QString::fromStdString(gint_ptr->genre().name())); // add in the GUI
        ++genreId;
    }
    w.placeGenreBoxes();
}
void Initializer::initCategoryResults(){
    FilmManager& fm = *(FilmManager::instance());
    FilmManager::ListType& fl = fm.list();


    for(FilmManager::ListType::iterator f_it(fl.begin()); f_it != fl.end(); ++f_it){
        Film& film = **f_it;
        unsigned long genreId, yearBlockId;
        CategoryResult::discoverCategoryId(&genreId, &yearBlockId, film);
        CategoryResult::createCategoryResult(yearBlockId, genreId,film.genres());
    }

}

void Initializer::initNodes(GraphWidget *widget){


    // create visual node and attach to user interface

    GenreInterfaceManager& gim = *GenreInterfaceManager::instance();
    GenreInterfaceManager::ListType& genres = gim.list();
    long i = 0;
    long nGenres = genres.size();
    for(GenreInterfaceManager::ListType::iterator git(genres.begin()); git != genres.end(); ++git){

        GenreInterface& genre_interface = **git;

        QColor color = QColor::fromHsv(255*i/nGenres,255,255);
        GenreNode *genreNode = new GenreNode(widget, color, genre_interface.genre().name());
        genre_interface.genreNode(genreNode);
        widget->addGenreNode(genreNode);
        ++i;
    }
    widget->createGenreCircle();

    FilmSpaceUpdater & fsu = *FilmSpaceUpdater::instance();
    fsu.setSpaceWidget(widget);
    fsu.updateInterfaces();

}
