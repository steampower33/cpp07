#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
Array<T>::Array() : _array(NULL), _len(0) {}

template <class T>
Array<T>::Array(unsigned int n) {
	_array = new T[n];
	_len = n;
}

template <class T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other)
	{
		_len = other.getSize();
		if (_array)
			delete _array;
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
		{
			_array[i] = other[i];
		}
	}
	return *this;
}

template <class T>
Array<T>::Array(const Array& other) {
	_array = NULL;
	_len = 0;
	*this = other;
}

template <class T>
Array<T>::~Array() {
	if (_array)
		delete _array;
}

template <class T>
unsigned int Array<T>::getSize() const {
	return _len;
}

template <class T>
const char* Array<T>::OutOfBounds::what() const throw() {
	return "Index Is Out Of Bounds.";
}

template <class T>
T& Array<T>::operator[](unsigned int idx) {
  if (idx < 0 || idx > _len - 1) 
  	throw OutOfBounds();
  return _array[idx];
}

template <class T>
const T& Array<T>::operator[](unsigned int idx) const {
  if (idx < 0 || idx > _len - 1) 
  	throw OutOfBounds();
  return _array[idx];
}

#endif