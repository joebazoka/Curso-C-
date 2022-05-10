//============================================================================
// Name        : Clase10_EspecificadoresAccesoVirtualFun.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 03 - APUNTE C++ - POLIMORFISMO
//============================================================================

// Especificadores de acceso y funciones virtuales
#include <iostream>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"

int main()
{
	Box box {20.0, 30.0, 40.0};
	ToughPack hardcase {20.0, 30.0, 40.0}; // Clase derivada de box - mismo tamaño
	Carton carton {20.0, 30.0, 40.0, "plastic"}; // Otra clase derivada de box

	box.showVolume(); // Volumen de Box
	hardcase.showVolume(); // Volumen de ToughPack
	carton.showVolume(); // Volumen de Carton

	// Descomentar la siguiente línea para producir un error
	// std::cout << "Volumen de hardcase: " << hardcase.volume() << std::endl;

	// Ahora utilizamos punteros.
	Box* pBox {&box}; // Apunta a tipo Box
	std::cout << "\nVolumen de box a través de pBox: " << pBox->volume() << std::endl;
	pBox->showVolume();

	pBox = &hardcase; // Apunta a tipo ToughPack
	std::cout << "Volumen de hardcase a través de pBox: " << pBox->volume() << std::endl;
	pBox->showVolume();

	pBox = &carton; // Apunta a tipo Carton
	std::cout << "Volumen de carton a través de pBox: " << pBox->volume() << std::endl;
	pBox->showVolume();
}

Volumen utilizable de Box: 24000
Volumen utilizable de Box: 20400
Volumen utilizable de Box: 22722.4

Volumen de box a través de pBox: 24000
Volumen utilizable de Box: 24000
Volumen de hardcase a través de pBox: 20400
Volumen utilizable de Box: 20400
Volumen de carton a través de pBox: 22722.4
Volumen utilizable de Box: 22722.4
