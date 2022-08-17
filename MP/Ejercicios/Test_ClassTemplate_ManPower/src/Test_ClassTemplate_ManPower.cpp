//============================================================================
// Name        : Test_ClassTemplate_ManPower.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejemplo de plantilla de clase Array.
//============================================================================

// Usando una plantilla de clase
#include "Box.h"
#include "Array.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	try
	{
		const size_t numValues {50};
		Array<double> values {numValues}; // Instancia de constructor de clase creada

		for (unsigned i {}; i < numValues; ++i)
			values[i] = i + 1; 			// Instancia de función miembro creada

		std::cout << "Suma de pares de elementos:";
		size_t lines {};
		for (size_t i {numValues - 1}; i >= 0; --i)
		{
			std::cout << (lines++ % 5 == 0 ? "\n" : "")<< std::setw(5) << values[i] + values[i - 1];
		}
	}
	catch (const std::out_of_range& ex)
	{
		std::cerr << "\nout_of_range excepcion capturada! " << ex.what() << std::endl;
	}
	try
	{
		const size_t nBoxes {10};
		Array<Box> boxes {nBoxes}; // Instncia de plantilla creada

		for (size_t i {} ; i <= nBoxes ; ++i) // Instancia de miembro creada en el loop
			std::cout << "El volumen de Box es: " << boxes[i].volume() << std::endl;
	}
	catch (const std::out_of_range& ex)
	{
		std::cerr << "\nout_of_range excepcion capturada! " << ex.what() << std::endl;
	}

	return 0;
}
