#include "database.h"

#include <memory>   // std::auto_ptr
#include <iostream>

#include <odb/database.hxx>
#include <odb/transaction.hxx>
#include <odb/query.hxx>

#include "database.h" // create_database

#include "model/film.h"
#include "model/mapper_sources/film-odb.hxx"
#include "model/genre.h"
#include "model/mapper_sources/genre-odb.hxx"

#include "model/manager/filmmanager.h"
#include "model/manager/genremanager.h"

#include <map>


using namespace std;
using namespace odb::core;

const unsigned short MIN_RATING = 0;

void loadDb(){
    FilmManager& fm = *FilmManager::instance();
    GenreManager& gm = *GenreManager::instance();

    try
    {
        auto_ptr<database> db (
          new odb::sqlite::database (
            DATABASE_FILE, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE));

        // Load genres

        std::map<unsigned long, Genre::Ptr> genre_map;

        transaction tg (db->begin());


        odb::result<Genre> rg (db->query<Genre> (true));

        if(rg.empty())
            cout << "there are no genres!" << endl;
        for(odb::result<Genre>::iterator i(rg.begin()); i != rg.end(); ++i){
            Genre::Ptr g_ptr = Genre::Ptr(db->load<Genre>(i.id()));
            Genre::Ptr copy = Genre::Ptr(new Genre(*g_ptr, false));
            genre_map[copy->id()] = copy;
            gm.add(copy);
        }

        tg.commit();

        // Load films
        //

        transaction t (db->begin ());
        odb::result<Film> r (db->query<Film> (true));
        if(r.empty())
            cout << "  there are no films!" << endl;

        unsigned long counter = 0;
        unsigned long step = 10000;
        for (odb::result<Film>::iterator i (r.begin ()); i != r.end (); ++i)
        {
            Film::Ptr f_ptr = Film::Ptr(db->load<Film>(i.id()));
            if(f_ptr->rating() > MIN_RATING){
                Film* film_copy = new Film(*f_ptr, false);

                // Connect films to genres

                Film::GenrePtrList& gl = f_ptr->genres();
                for (Film::GenrePtrList::iterator j (gl.begin()); j != gl.end(); ++j){
                    odb::tr1::lazy_shared_ptr<Genre> t(*j);
                    unsigned long id = t.object_id<Genre>();
                    film_copy->genres().push_back(genre_map[id]);
                    Genre& g = *(genre_map[id]);
                    g.films().push_back(Film::Ptr(film_copy));

                }

                fm.add(Film::Ptr(film_copy));
                ++counter;

            }
        }
        t.commit ();
    }
    catch (const odb::exception& e)
    {
      cerr << e.what () << endl;
    }
}
