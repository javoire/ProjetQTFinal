#ifndef MANAGER_H
#define MANAGER_H

#include <list>
#include <map>
#include "common/singleton.h"


template <class MngClass // Manager class (son of this class)
        , class ObjectRefType // Type of object to be managed
        , template <class, class = std::allocator<ObjectRefType> > class ContainerType = std::list // type of structure to store managed objects
        >
class Manager:
    public Singleton< MngClass >
{
    friend class Singleton< MngClass >;
public:
    typedef ContainerType<ObjectRefType> ListType;
    ListType& list(){ return list_; }

    void add (ObjectRefType ptr){
        list_.push_back(ptr);
    }
protected:
    Manager(){};
private:
    ListType list_;
};

#endif // MANAGER_H
