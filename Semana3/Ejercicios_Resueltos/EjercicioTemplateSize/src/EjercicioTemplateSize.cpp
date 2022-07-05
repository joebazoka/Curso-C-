//============================================================================
// Name        : EjercicioTemplateSize.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <array>


template<typename T>
size_t my_size(const std::vector<T>& vec)
{
	return vec.size();
}

template<typename T, size_t N>
size_t my_size(const T (&array)[N])
{
	return N;
}

template<typename T, size_t N>
size_t my_size(const std::array<T,N>& stdArr)
{
	return N;
}



int main() {

	int array1[10] {2,4,6,8,10,12,14,16};
	std::cout << "Tamaño de array1: " << my_size(array1) << std::endl;

	std::array<int, 15> std_array{55,66,21,3};
	std::cout << "Tamaño de std_array: " << my_size(std_array) << std::endl;

	std::vector<double> vec1 {5.8, -25.7, 69, 37.7};
	std::cout << "Tamaño de vec1: " << my_size(vec1) << std::endl;

	return 0;
}



