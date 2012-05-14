#ifndef FILMINTERFACEMANAGER_H
#define FILMINTERFACEMANAGER_H

#include "controller/film_interface.h"

#include "common/manager.h"

#include <map>

class FilmInterfaceManager : public Manager<FilmInterfaceManager, FilmInterface::Ptr> {

public:
    void map(FilmInterface::Ptr ptr, unsigned long key){
        fint_map_[key] = ptr;
    }
    FilmInterface& filmInterface(unsigned long key){ return *(fint_map_[key]); }
private:
    std::map<unsigned long, FilmInterface::Ptr> fint_map_;
};

#endif // FILMINTERFACEMANAGER_H
