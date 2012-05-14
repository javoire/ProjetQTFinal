#include "filmspaceupdater.h"
#include "genreinterfacemanager.h"

#include <iostream>
#include <QThread>

#include "gui/form/filterform.h"

using namespace std;

FilmSpaceUpdater::FilmSpaceUpdater():
        numberGenresUnselected_(0)
{
}

void FilmSpaceUpdater::updateName(QString name){
    FilmFilter& filter = *(FilmFilter::instance());
    filter.name(name.toStdString());

    updateInterfaces();
}

void FilmSpaceUpdater::updateYearLow(int year){
    FilmFilter& filter = *(FilmFilter::instance());

    filter.yearLower(year);

    updateInterfaces();
}

void FilmSpaceUpdater::updateYearHigh(int year){
    FilmFilter& filter = *(FilmFilter::instance());

    filter.yearHigher(year);

    updateInterfaces();
}

void FilmSpaceUpdater::updateGenre(bool checked, QString genreName){

    if(checked) ++numberGenresUnselected_;
    else --numberGenresUnselected_;

    GenreInterface & gi = GenreInterfaceManager::instance()->genreInterface(genreName.toStdString());
    Genre& genre = gi.genre();
    Genre::FilmPtrList & films = genre.films();

    for(Genre::FilmPtrList::iterator fit(films.begin()); fit != films.end(); ++fit){
        Film & film = **fit;
        FilmInterface & fi = *(film.interface());
        if(checked)
            fi.genreLevel(fi.genreLevel()+1);
        else
            fi.genreLevel(fi.genreLevel()-1);
    }
    updateInterfaces();
}

void FilmSpaceUpdater::updateInterfaces(){
    CategoryResult::reset();

    FilmFilter& filter = *(FilmFilter::instance());
    FilmInterfaceManager& fim = *(FilmInterfaceManager::instance());
    FilmInterfaceManager::ListType& fil = fim.list(); // get films interface list

    for(FilmInterfaceManager::ListType::iterator fil_it(fil.begin()); fil_it != fil.end(); ++fil_it){
        FilmInterface::Ptr fi_ptr = *fil_it;
        FilmInterface& fi = *fi_ptr;
        if(numberGenresUnselected_ == 0 || fi.genreLevel() > 0){ // film match genres
            fi.criteriaLevel(filter.evaluate(*(fi.film())));
            if(fi.criteriaLevel() > 0){ // film match parameters
                unsigned long genreId, yearBlockId;
                CategoryResult::discoverCategoryId(&genreId, &yearBlockId, *(fi.film()));
                CategoryResult::Ptr catRes_ptr = CategoryResult::getCategoryResult(yearBlockId, genreId);
                CategoryResult& catRes = *catRes_ptr;
                catRes.addFilm(fi.film());
            }
        }
    }

    graph_->updateDistribution(CategoryResult::categoryResultList());
    graph_->update();

}

