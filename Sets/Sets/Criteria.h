#pragma once
#include "Set.h"
template<typename T>
class Criteria :
    public Set<T>
{
private:

public:
    bool predicateUnion(const T& elem, Vector<T> tmpset) {
        if (type == 1) {
            for (size_t i = 0; i < tmpset.getSize(); i++) {
                if (tmpset[i] % elem != 0) {
                    return false;
                }
            }
        }
        else if (type == 2) {
            size_t tmp = 0;
            for (size_t i = 0; i < tmpset.getSize(); i++) {
                if (tmpset[i] % elem == 0) {
                    tmp++;
                }
            }
            if (tmp == 0) {
                return false;
            }
        }
        return true;
    }
    bool predicateIntersection(const T& elem, Vector<T> tmpset) {
        
    }

    Criteria(bool (*func)(const T&))
    {
        T element;
        if (func(element)) set.addElem(element);
    }
};


