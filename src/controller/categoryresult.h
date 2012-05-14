#ifndef CATEGORYRESULT_H
#define CATEGORYRESULT_H

#include <list>
class CategoryResult;
typedef CategoryResult* CategoryResult_Ptr;
typedef std::list<CategoryResult_Ptr> CategoryResult_List;
#include "controller/film_interface.h"

class CategoryResult {
public:
    typedef std::list<Film_Ptr> FilmList;
    typedef Film_GenrePtrList GenreList;
    typedef CategoryResult_Ptr Ptr;
    typedef std::map<long, std::map<long, CategoryResult::Ptr> > CategoryMap;
    typedef CategoryResult_List List;
private:
    GenreList genres_;
    long yearBlock_;
    long categoryCount_;
    FilmList films_;
    static long numberOfResults_;
    CategoryResult(Film_GenrePtrList& genres, unsigned long yearBlock);
    static List categoryResults_;
    static CategoryMap map_;
public:
    GenreList genres() const { return genres_;}
    long yearBlock() const { return yearBlock_; }
    float percentage() const {
        if(numberOfResults_ == 0) return 0;
        return (float) categoryCount_/numberOfResults_;
    }
    long categoryCount() const { return categoryCount_; }

    void addFilm(Film_Ptr film);
    FilmList films() const { return films_; }
public:
    static void createCategoryResult(unsigned long yearBlockId, unsigned long genreId, Film_GenrePtrList& genres);
    static CategoryResult::Ptr getCategoryResult(unsigned long yearBlockId, unsigned long genreId);
    static long numberOfResults() { return numberOfResults_;}
    static void reset();
    static List& categoryResultList() { return categoryResults_; }

    static void discoverCategoryId(unsigned long* genreId, unsigned long* yearBlockId, Film&);
};


#endif // CATEGORYRESULT_H
