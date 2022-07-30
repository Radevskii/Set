#pragma once
#include "Set.h"
template<typename T>
class Finite :
    public Set<T>
{
public:
    Finite(const T*, size_t);
};

template<typename T>
Finite<T>::Finite(const T* set, size_t size)
{

    for (size_t i = 0; i < size; i++) {
        this->set.addElem(set[i]);
    }
}
