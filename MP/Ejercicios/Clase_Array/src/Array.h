/*
 * Array.h
 *
 *  Created on: 17 ago. 2022
 *      Author: Jose
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include <memory>

//
class Array{

private:
	int *ptr;
	size_t size;

public:
	Array();
	Array(size_t size);
	Array(const Array& oArray);	// constructor de copia

	Array& operator=(const Array& rhs);	// operador de asignacion

	~Array();

	int *getPtr() const;

	size_t getSize() const;
};



#endif /* ARRAY_H_ */
