/*
 * Array.cpp
 *
 *  Created on: 17 ago. 2022
 *      Author: Lorenzo
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
// idioma copy-and-swap
// mecanismo de copia e intercambio.

//*********************************
//  mecanismo copy-and-swap
//*********************************
Array& Array::operator=(Array rhs)
{
	//std::cout << "operador de asignacion..." << std::endl;
    _swap(*this, rhs);

    return *this;
}


// funcion amiga de intercambio que utiliza std::swap
void _swap(Array& obj1, Array& obj2) // nothrow
{
	using std::swap;

    swap(obj1.size, obj2.size);
    swap(obj1.ptr, obj2.ptr);
}


// Liberamos memoria
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

