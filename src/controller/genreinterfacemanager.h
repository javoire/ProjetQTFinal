#ifndef GENREINTERFACEMANAGER_H
#define GENREINTERFACEMANAGER_H


#include "controller/genreinterface.h"

#include "common/manager.h"

class GenreInterfaceManager : public Manager<GenreInterfaceManager, GenreInterface::Ptr> {

public:
    void map(GenreInterface::Ptr ptr, std::string key){
        gint_map_[key] = ptr;
    }
    GenreInterface& genreInterface(std::string key){ return *(gint_map_[key]); }
private:
    std::map<std::string, GenreInterface::Ptr> gint_map_;
};

#endif // GENREINTERFACEMANAGER_H
