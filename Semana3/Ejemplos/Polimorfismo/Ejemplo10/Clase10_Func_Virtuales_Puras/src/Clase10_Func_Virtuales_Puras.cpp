//============================================================================
// Name        : Clase10_Func_Virtuales_Puras.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 10 - CURSO C++ - POLIMORFISMO (CLASES ABSTRACTAS)
//============================================================================

// Usando clases abstractas
#include <iostream>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"

int main()
{
	ToughPack hardcase {20.0, 30.0, 40.0};
	Carton carton {20.0, 30.0, 40.0, "plastic"};

	Box* pBox {&hardcase}; // Puntero Base  - direccion derivada
	std::cout << "Volumen de hardcase: " << pBox->volume() << std::endl;

	pBox = &carton; // Nueva direccion derivada
	std::cout << "Volumen de carton: " << pBox->volume() << std::endl;
}
