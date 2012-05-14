#ifndef FILM_H
#define FILM_H

class Film;
class Genre;


#include <string>
#include <cstddef> // std::size_t

#include <odb/core.hxx>

#include <QtCore/QString>
#include <vector>


#include <odb/tr1/memory.hxx>

#include <odb/tr1/lazy-ptr.hxx>

using std::tr1::shared_ptr;
using odb::tr1::lazy_shared_ptr;
using odb::tr1::lazy_weak_ptr;


typedef shared_ptr< Film > Film_Ptr;
typedef std::vector< lazy_shared_ptr< Genre > > Film_GenrePtrList;

//typedef shared_ptr< Film > Film_Ptr;
//typedef lazy_weak_ptr< Film> Film_WeakPtr;
//typedef std::vector< lazy_shared_ptr< Genre > > Film_GenrePtrList;


#include "genre.h"

#ifndef ODB_COMPILATION
#include "controller/film_interface.h"
#endif

#ifdef ODB_COMPILATION
#pragma db object pointer(Film::Ptr)
#endif
class Film
{

#ifndef ODB_COMPILATION
private:
    FilmInterface_Ptr interface_;
public:
    FilmInterface_Ptr interface() const { return interface_; }
    void interface(FilmInterface_Ptr fint_ptr) { interface_ = fint_ptr; }
#endif

public:
    typedef Film_Ptr Ptr;
    typedef Film_GenrePtrList GenrePtrList;
    Film (std::string name)
        : name_ (name)
        , year_ (0)
        , rating_ (0)
        , length_ (0)
    {
    }
    Film (Film& film, bool useGenres):
            id_(film.id_)
            , name_(film.name())
            , year_(film.year())
            , rating_(film.rating())
            , length_(film.length())
    {
        if(useGenres)
            genres_ = film.genres();
    }

    unsigned long id() const { return id_; }

    std::string name() const { return name_; }

    unsigned short year() const { return year_; }

    unsigned short rating() const { return rating_; }

    unsigned short length() const { return length_; }


    GenrePtrList& genres() { return genres_; }

      //void addGenre(GenrePtr g_ptr);

private:
  friend class odb::access;

  Film () {}
#ifdef ODB_COMPILATION
  #pragma db id auto
#endif
  unsigned long id_;

  std::string name_;
  unsigned short year_;
  unsigned short rating_;
  unsigned short length_;


#ifdef ODB_COMPILATION
  #pragma db value_not_null inverse(films_)
#endif
  GenrePtrList genres_;


};
#ifdef ODB_COMPILATION
#pragma db view object(Film)
#endif
struct film_stat
{
#ifdef ODB_COMPILATION
  #pragma db column("count(" + Film::id_ + ")")
#endif
  std::size_t count;
/*
  #pragma db column("min(" + Film::age_ + ")")
  unsigned short min_age;

  #pragma db column("max(" + Film::age_ + ")")
  unsigned short max_age;
  */
};

#endif // FILM_H
