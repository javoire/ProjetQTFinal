#include "categoryresult.h"


#define BLOCK_SIZE 30

CategoryResult::CategoryResult(GenreList& genres, unsigned long yearBlock):
        genres_(genres), yearBlock_(yearBlock)
{
}

CategoryResult::List CategoryResult::categoryResults_;
CategoryResult::CategoryMap CategoryResult::map_;

long CategoryResult::numberOfResults_ = 0;

void CategoryResult::addFilm(Film::Ptr film){
    films_.push_back(film);
    ++categoryCount_;
    ++(CategoryResult::numberOfResults_);
}


void CategoryResult::createCategoryResult(unsigned long yearBlockId, unsigned long genreId, Film::GenrePtrList& genres){
    CategoryResult::CategoryMap::iterator catYearIt;
    std::map<long, CategoryResult::Ptr>::iterator catGIt;
    catYearIt = CategoryResult::map_.find(yearBlockId);
    if(catYearIt == map_.end())
        CategoryResult::map_[yearBlockId] = map<long, CategoryResult::Ptr>();
    catGIt = CategoryResult::map_[yearBlockId].find(genreId);
    if(catGIt == map_[yearBlockId].end()){
        CategoryResult* catRes =  new CategoryResult(genres, yearBlockId);
        CategoryResult::map_[yearBlockId][genreId] = catRes;
        CategoryResult::categoryResults_.push_back(catRes);
    }


}

CategoryResult::Ptr CategoryResult::getCategoryResult(unsigned long yearBlockId, unsigned long genreId){
    if(map_[yearBlockId][genreId] == NULL){
        cout << "ERROR - Null Pointer: " << __FILE__ << " line: " << __LINE__ << endl;
        cout << "  - yearBlockId: " << yearBlockId << endl;
        cout << "  - genreId:     " << genreId << endl;
    }
    return map_[yearBlockId][genreId];
}

void CategoryResult::discoverCategoryId(unsigned long* genreId, unsigned long* yearBlockId, Film& film){
    Film::GenrePtrList& genres = film.genres();
    *genreId = 0;
    for(Film::GenrePtrList::iterator git(genres.begin()); git != genres.end(); ++git){
        Genre& genre = **git;
        GenreInterface& genreInterface = *(genre.interface());
        *genreId = (*genreId) | (1<<genreInterface.id());
    }

    *yearBlockId = (film.year()-1888)/BLOCK_SIZE;
}

void CategoryResult::reset(){
    for(List::iterator crit(categoryResults_.begin()); crit != categoryResults_.end(); ++crit){
        CategoryResult& catRes = **crit;
        catRes.films_.clear();
        catRes.categoryCount_ = 0;
    }
    CategoryResult::numberOfResults_ = 0;
}
