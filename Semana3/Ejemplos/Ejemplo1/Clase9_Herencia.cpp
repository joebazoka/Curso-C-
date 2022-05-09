//============================================================================
// Name        : Clase9_Herencia.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Box.h"
#include "Carton.h"

int main() {

	// Instanciar un objeto Box y dos objetos Carton.
	Box box {40.0, 30.0, 20.0};
	Carton carton;
	Carton chocolateCarton {"Cartón sólido blanqueado"};

	// Check them out - sizes first of all
	std::cout << "box ocupa " << sizeof box << " bytes" << std::endl;
	std::cout << "carton ocupa " << sizeof carton << " bytes" << std::endl;
	std::cout << "candyCarton occupies " << sizeof chocolateCarton << " bytes" << std::endl;

	// Calculo de volumenes
	std::cout << "Volumen de box: " << box.volume() << std::endl;
	std::cout << "Volumen de carton: " << carton.volume() << std::endl;
	std::cout << "Volumen de  chocolateCarton: " << chocolateCarton.volume() << std::endl;
	//std::cout << "Largo de chocolateCarton: " << chocolateCarton.getLength() << std::endl;


	return 0;
}


