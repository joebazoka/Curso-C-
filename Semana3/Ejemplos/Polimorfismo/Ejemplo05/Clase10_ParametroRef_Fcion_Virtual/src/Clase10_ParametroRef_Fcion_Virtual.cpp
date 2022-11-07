//============================================================================
// Name        : Clase10_ParametroRef_Fcion_Virtual.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 05 - APUNTE C++
//============================================================================

// Utilizando un parametro por referencia para llamar a una funci�n virtual
#include <iostream>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"


// Funci�n global para imprimir el volumen de una caja
void showVolume(const Box& rBox)
{
	std::cout << "Volumen utilizable de Box: " << rBox.volume() << std::endl;
}
int main()
{
	Box box {20.0, 30.0, 40.0}; // Un box base
	ToughPack hardcase {20.0, 30.0, 40.0}; // Un box derivado - mismo tama�o
	Carton carton {20.0, 30.0, 40.0, "plastic"}; // Otro box derivado

	showVolume(box); // Mostrar volumen de un box de clase base
	showVolume(hardcase); //  Mostrar volumen de un box de clase derivada
	showVolume(carton); // Mostrar volumen de un box de clase derivada
}
