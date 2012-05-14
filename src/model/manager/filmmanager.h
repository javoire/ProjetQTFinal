#ifndef FILMMANAGER_H
#define FILMMANAGER_H

#include "model/film.h"

#include "common/manager.h"

class FilmManager : public Manager<FilmManager, Film::Ptr> {};

#endif // FILMMANAGER_H
