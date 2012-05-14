#ifndef FILM_INTERFACE_H
#define FILM_INTERFACE_H


class FilmInterface;
typedef FilmInterface* FilmInterface_Ptr;

#include <iostream>
#include "model/film.h"


#include "gui/film_space/filmnode.h"

using namespace std;

class FilmNode;

class FilmInterface
{
public:
    typedef FilmInterface_Ptr Ptr;
    typedef unsigned short LevelType;
private:
    Film_Ptr film_ptr_;
    FilmNode_Ptr filmNode_ptr_;
    LevelType criteriaLevel_;
    LevelType genreLevel_;
    static LevelType CRITERIA_LEVEL_DEFAULT;
    static LevelType GENRE_LEVEL_DEFAULT;
public:
    FilmInterface(Film_Ptr& film_ptr);
    FilmNode& filmNode() const { return *filmNode_ptr_; }
    void filmNode(FilmNode_Ptr filmNode_ptr){ filmNode_ptr_ = filmNode_ptr; }
    void update();
    Film_Ptr film() const { return film_ptr_; }
    LevelType criteriaLevel() const { return criteriaLevel_; }
    void criteriaLevel(LevelType level) { criteriaLevel_ = level; }
    LevelType genreLevel() const { return genreLevel_; }
    void genreLevel(LevelType level) { genreLevel_ = level; }

};
#endif // FILM_INTERFACE_H
