#ifndef FILMNODEMANAGER_H
#define FILMNODEMANAGER_H


#include "gui/film_space/filmnode.h"

#include "common/manager.h"

class FilmNodeManager : public Manager<FilmNodeManager, FilmNode::Ptr> {};

#endif // FILMNODEMANAGER_H
