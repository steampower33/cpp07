#include "iter.hpp"

int main() {
	int intArray[5] = {1, 2, 3, 4, 5};
	double doubleArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

	::iter(intArray, 5, func);
	for (int i = 0; i < 5; i++)
		std::cout << intArray[i] << " ";
	std::cout << std::endl;
	::iter(doubleArray, 5, func);
	for (int i = 0; i < 5; i++)
		std::cout << doubleArray[i] << " ";
	std::cout << std::endl;
}