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

	Array& operator=(Array rhs);

	~Array();

	int *getPtr() const;

	size_t getSize() const;
	friend void _swap(Array& obj1, Array& obj2);
};



#endif /* ARRAY_H_ */
