//============================================================================
// Name        : ClaseArray_CopyAnd_Swap.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Array.h"
#include <chrono>
#include <random>

using namespace std;


unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine generador (seed);
uniform_int_distribution<unsigned int> distribucion(-25, 421);

unsigned int randomGen()    // llamamos a esta función para generar random.
{
    return distribucion(generador);
}


void print(string titulo, Array &array)
{

	cout << titulo << endl;
	for(size_t i{}; i < array.getSize(); i++)
	{
		cout << (array.getPtr())[i] << " , ";
	}

	cout << "\n\n";
}


int main() {

	Array array1(20);

	int *ptrArray1 {array1.getPtr()};

	ptrArray1[0] = 258;

	for(size_t i{}; i < array1.getSize(); i++)
	{
		ptrArray1[i] = randomGen();
	}

	print("array1 creado y modificado", array1);

	//***********************************************
	Array array2 {array1};	// constructor de copia

	ptrArray1[0] += 7;

	print("Modificado: ptrArray1[0] += 7", array1);
	print("array2 copiado desde array1", array2);

	//***********************************************
	Array array3;
	array3 = array2;
	print("array3 igualado a array2", array3);

	//***************************
	Array array4(5);
	array4 = array2;
	print("array4 igualado a array2", array4);

	return 0;
}
