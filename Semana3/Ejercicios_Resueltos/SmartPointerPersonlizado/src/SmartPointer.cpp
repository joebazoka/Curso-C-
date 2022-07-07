/*
 * SmartPointer.cpp
 *
 *  Created on: 7 jul. 2022
 *      Author: Jose
 */

#include "SmartPointer.h"
#include <iostream>

using namespace std;

SmartPointer::SmartPointer(double *mPtr): ptr {mPtr}
{
}

double *SmartPointer::getPtr()
{
	return ptr;
}


SmartPointer::~SmartPointer()
{
	// liberamos memoria reservada.
	delete[] ptr;
	ptr = nullptr;

	cout << "Destructor invocado, memoria liberada" << endl;
}


