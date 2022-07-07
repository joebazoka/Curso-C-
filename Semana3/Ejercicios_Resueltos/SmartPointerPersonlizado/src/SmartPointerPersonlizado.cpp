//============================================================================
// Name        : SmartPointerPersonlizado.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SmartPointer.h"

using namespace std;

int main() {

	// reservamos array dinamico y pasamos la direccion
	// del bloque al constructor de SmartPointer.
	// new me devuelve una direccion de memoria la bloque
	// reservado. Este ejemplo solo esta destinado
	// a reservar arrays double.
	SmartPointer smrtPtr {new double[10]};

	double *ptr = smrtPtr.getPtr();

	// Cargamos datos en array creado dinamicamente.
	for(size_t i{}; i < 10; ++i){

		ptr[i] = i * 7;
	}

	// Imprimimos datos en array creado dinamicamente.
	for(size_t i{}; i < 10; ++i){

		cout << ptr[i] << ",";
	}

	cout << endl;

	return 0;
}
