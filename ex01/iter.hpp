#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Tfunc>
void iter(T* array, std::size_t len, Tfunc func) {
	for (std::size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T>
void func(T& e) {
	e *= 2;
}

#endif