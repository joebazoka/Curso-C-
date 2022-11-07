//============================================================================
// Name        : Clase10_EnlaceEstatico.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 01 - CURSO C++ - POLIMORFISMO
//============================================================================

// Uso de funciones virtuales
#include <iostream>
#include "ToughPack.h"
#include "Carton.h"
#include "Box.h"

int main()
{
	Box box {20.0, 30.0, 40.0}; // Definir una caja
	ToughPack hardcase {20.0, 30.0, 40.0}; // Declarar una caja dura - mismo tamaño
	box.showVolume(); // Mostrar volumen de box base
	hardcase.showVolume(); // Mostrar volumen de box derivado

	std::cout << "Volumen de hardcase: " << hardcase.volume() << std::endl;
	Box *pBox {&hardcase};
	std::cout << "Volumen de hasrdcase a través de pBox: " << pBox->volume() << std::endl;

}
