#include "film_interface.h"

#include <iostream>
using namespace std;

FilmInterface::LevelType FilmInterface::CRITERIA_LEVEL_DEFAULT = 0;
FilmInterface::LevelType FilmInterface::GENRE_LEVEL_DEFAULT = 0;

FilmInterface::FilmInterface(Film::Ptr& film_ptr):
        film_ptr_(film_ptr)
        , criteriaLevel_(CRITERIA_LEVEL_DEFAULT)
        , genreLevel_(GENRE_LEVEL_DEFAULT)
            {
    if(film_ptr == NULL){
        cout << "ERROR: Film interface received a null Film pointer." << endl;
        exit(1);
    }
}

