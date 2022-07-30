#pragma once
#include "Vector.h"
template<typename T>
class Set
{
protected:
	Vector<T> set;
	int size;
	int type;
public:
	Set() {};
	bool contains(const T&);
	void read() = 0;
};

template<typename T>
bool Set<T>::contains(const T& element) {
	for (size_t i = 0; i < set.size(); i++) {
		if (set[i] == element) {
			return true;
		}
	}
	return false;
}