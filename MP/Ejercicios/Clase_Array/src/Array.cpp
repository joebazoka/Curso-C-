/*
 * Array.cpp
 *
 *  Created on: 17 ago. 2022
 *      Author: Jose
 */

#include "Array.h"
#include <memory>

Array::Array()
{
	ptr = nullptr;
	size = 0;
}

Array::Array(size_t size) : ptr {new int[size]}, size {size}
{
}

// Constructor de copia
Array::Array(const Array& oArray): Array{oArray.size}
{
	if(&oArray != this)
	{
		for(size_t i{}; i < size; i++)
		{
			ptr[i] = oArray.ptr[i];
		}
	}
}


// Sobrecarga de operadores
Array& Array::operator=(const Array& rhs)	// operador de asignacion
{
	//std::cout << "operador de asignacion..." << std::endl;

	if(&rhs != this)	// evita autoasignacion.
	{
		if(nullptr != ptr) delete[] ptr;

		ptr = new int[rhs.size];
		size = rhs.size;

		for(size_t i{}; i < size; i++)
		{
			ptr[i] = rhs.ptr[i];		// copiar cada elemento de rhs en ptr.
		}
	}

	return (*this);
}

// Liberamos memoria en destructor
Array::~Array()
{
	if(nullptr != ptr) delete[] ptr;

	size = 0;
}


int *Array::getPtr() const
{
	return ptr;
}

size_t Array::getSize() const
{
	return size;
}




