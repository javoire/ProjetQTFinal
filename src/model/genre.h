#ifndef GENRE_H
#define GENRE_H

#include <cstddef> // std::size_t

#include <odb/core.hxx>

#include <QtCore/QString>

#include <vector>
//#include <boost/weak_ptr.hpp>

#include <odb/tr1/memory.hxx>

#include <odb/tr1/lazy-ptr.hxx>

#include <iostream>

using std::tr1::shared_ptr;
using std::tr1::weak_ptr;
using odb::tr1::lazy_shared_ptr;
using odb::tr1::lazy_weak_ptr;

class Film;
class Genre;

typedef shared_ptr<Genre> Genre_Ptr;

#ifndef ODB_COMPILATION
#include "controller/genreinterface.h"
#endif

//typedef shared_ptr<Genre> Genre_Ptr;
//typedef lazy_weak_ptr <Genre> Genre_WeakPtr;
//typedef std::vector< lazy_shared_ptr <Film> > Genre_FilmPtrList;

#include "film.h"

#ifdef ODB_COMPILATION
#pragma db object pointer(Genre::Ptr)
#endif
class Genre
{


public:
    typedef Genre_Ptr Ptr;
    typedef std::vector< lazy_shared_ptr <Film> > FilmPtrList;
    Genre (std::string name)
      : name_ (name)
  {
  }

#ifndef ODB_COMPILATION
private:
    GenreInterface_Ptr interface_;
public:
    GenreInterface_Ptr interface() const { return interface_; }
    void interface(GenreInterface_Ptr fint_ptr) { interface_ = fint_ptr; }
#endif


    Genre(Genre genre, bool getFilms):
        id_(genre.id_)
        , name_(genre.name_)
    {
        if(getFilms)
            films_ = genre.films_;
    }

    ~Genre(){}

    void name(std::string name){
        name_ = name;
    }

    std::string name() const {
      return name_;
    }

    unsigned long id() const {
        return id_;
    }

    bool operator== (const Genre& other) const {
        if(other.id_ == this->id_)
            return true;
        return false;
    }

    Genre::FilmPtrList& films() {
      return films_;
  }

  //void addFilm(Film& f);

private:
  friend class odb::access;

  Genre () {}
#ifdef ODB_COMPILATION
  #pragma db id auto
#endif
  unsigned long id_;

  std::string name_;

#ifdef ODB_COMPILATION
  #pragma db value_not_null unordered
#endif
  Genre::FilmPtrList films_;


};
#ifdef ODB_COMPILATION
#pragma db view object(Genre)
#endif
struct genre_stat
{
    #ifdef ODB_COMPILATION
    #pragma db column("count(" + Genre::id_ + ")")
    #endif
    std::size_t count;
};
#endif // GENRE_H
