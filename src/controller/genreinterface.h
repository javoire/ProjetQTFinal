#ifndef GENREINTERFACE_H
#define GENREINTERFACE_H

#include <QComboBox>
#include <list>


class GenreInterface;

typedef GenreInterface* GenreInterface_Ptr;

#include "model/genre.h"
#include "film_interface.h"

#include "gui/film_space/genrenode.h"


class GenreNode;

class GenreInterface
{
public:
    typedef GenreInterface_Ptr Ptr;
private:
    Genre_Ptr genre_ptr_;
    GenreNode* genre_node_ptr_;
    typedef unsigned long ComboBoxItem_id_Type;
    ComboBoxItem_id_Type comboBoxItem_id_;
    long id_;
public:
    typedef std::list<FilmInterface_Ptr> FilmIntListType;
    GenreInterface(Genre_Ptr& genre_ptr, long id): genre_ptr_(genre_ptr), id_(id) {}
    ComboBoxItem_id_Type comboBoxItem_id() const { return comboBoxItem_id_; }
    void comboBoxItem_id(ComboBoxItem_id_Type id){ comboBoxItem_id_ = id; }
    Genre& genre() const { return *genre_ptr_; }

    void genreNode(GenreNode* gn){ genre_node_ptr_ = gn; }
    GenreNode& genreNode() const { return *genre_node_ptr_; }

    long id() const { return id_; }
    static const std::string NONE_GENRE;

};

#endif // GENREINTERFACE_H
