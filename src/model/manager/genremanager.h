#ifndef GENREMANAGER_H
#define GENREMANAGER_H

#include "model/genre.h"

#include "common/manager.h"

class GenreManager : public Manager<GenreManager, Genre::Ptr> {};

#endif // GENREMANAGER_H
