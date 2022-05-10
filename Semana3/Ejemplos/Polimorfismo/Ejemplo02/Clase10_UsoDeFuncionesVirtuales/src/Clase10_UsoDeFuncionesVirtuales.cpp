//============================================================================
// Name        : Clase10_UsoDeFuncionesVirtuales.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 02 - APUNTE C++ - POLIMORFISMO
//============================================================================

// Uso de funciones virtuales
#include <iostream>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"

int main()
{
	Box box {20.0, 30.0, 40.0};
	ToughPack hardcase {20.0, 30.0, 40.0}; // Box derivado - mismo tamaño
	Carton carton {20.0, 30.0, 40.0, "plastic"}; // Otro box derivado

	box.showVolume(); // Volumen de box
	hardcase.showVolume(); // Volumen de ToughPack
	carton.showVolume(); // Volumen de Carton

	// Ahora usamos un puntero de tipo clase Base
	Box* pBox {&box}; // Apunta un tipo Box
	std::cout << "\nVolumen de a través de box Box: " << pBox->volume() << std::endl;
	pBox->showVolume();

	pBox = &hardcase; // Apunta a tipo ToughPack
	std::cout << "Volumen de hardcase a través de pBox: " << pBox->volume() << std::endl;
	pBox->showVolume();

	pBox = &carton; // Apunta a tipo Carton
	std::cout << "Volumen de carton a través de pBox: " << pBox->volume() << std::endl;
	pBox->showVolume();
}

~ToughPack() { std::cout << "Destructor de ToughPack llamado" << std::endl; }

~Carton() { std::cout << "Destructor Carton llamado" << std::endl; }
