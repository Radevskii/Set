#pragma once
#include "Set.h"
template<typename T>
void trim(T* set, size_t& size) {
	if (size == 0 || size == 1) 
	{ 
		return;
	}
	T* temp = new T[size];
	
	size_t i, j = 0, swapCount = 0;
	for (i = 0; i < size; i++) {
		for (size_t k = i + 1; k < size; k++) {
			if (arr[i] != arr[k]) {
				temp[j++] = arr[i];
			}
		}
		
	}
	size = j;
	for (i = 0; i < size; i++) {
		arr[i] = temp[i];
	}
	delete[] temp;
}