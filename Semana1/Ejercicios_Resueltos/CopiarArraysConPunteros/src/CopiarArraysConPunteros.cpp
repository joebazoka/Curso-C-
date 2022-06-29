//============================================================================
// Name        : CopiarArraysConPunteros.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Copia un array A en otro array B en forma inversa utilizando punteros.
//============================================================================

#include <iostream>

const size_t ARRAY_SIZE {10};

int main() {

	int A[ARRAY_SIZE] {2,4,6,8,10,12,16,-22,44,-99};
	int B[ARRAY_SIZE];

	// Cargamos array B con valore de array A en forma inversa.
	for(size_t i{}; i < ARRAY_SIZE; ++i)
	{
		*(B+i) = *(A + ARRAY_SIZE - 1 - i);
	}

	std::cout << "Elementos de array B" << std::endl;

	for(int elem : B)// Utilizamos for basado en rangos para imprimir contenido de B
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}
