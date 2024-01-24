#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, std::size_t len, void (*f)(T&)) {
	for (std::size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

template <typename T>
void func(T& e) {
	e *= 2;
}

#endif