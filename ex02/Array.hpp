#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array {
public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();
	unsigned int getSize() const;
	T& operator[](unsigned int idx);
	const T& operator[](unsigned int idx) const;
	class OutOfBounds : public std::exception {
		public:
			const char* what() const throw();
	};
private:
	T* _array;
	unsigned int _len;
};

#include "Array.tpp"

#endif