#ifndef FILMFILTER_H
#define FILMFILTER_H

#include <algorithm>
#include <string>
#include <iostream>

#include "common/singleton.h"

#include "model/genre.h"

using namespace std;

class FilmFilter: public Singleton<FilmFilter>
{
    friend class Singleton<FilmFilter>;
public:
private:
    FilmFilter();
    std::string name_;
    unsigned short yearLower_;
    unsigned short yearHigher_;
    Genre::Ptr genre_ptr_;

public:
    unsigned short evaluate(Film& film) const {
        unsigned short grade = 0, year;
        
        year = film.year();
        if( (yearLower_ == 0 || year >= yearLower_) && (yearHigher_ == 0 || year <= yearHigher_)){
            string filmName = film.name();
            string searchName = name_;
            std::transform(filmName.begin(), filmName.end(),filmName.begin(), ::toupper);
            std::transform(searchName.begin(), searchName.end(),searchName.begin(), ::toupper);
            if(name_.empty() || filmName.find(searchName) != std::string::npos){
                grade = 1;
            }
        }

        return grade;

    }

    void name(std::string name) { name_ = name; }
    void yearLower(unsigned short yearLower) { yearLower_= yearLower; }
    void yearHigher(unsigned short yearHigher) { yearHigher_ = yearHigher; }
    void genre(Genre::Ptr genre_ptr) { genre_ptr_ = genre_ptr; }
};

#endif // FILMFILTER_H
