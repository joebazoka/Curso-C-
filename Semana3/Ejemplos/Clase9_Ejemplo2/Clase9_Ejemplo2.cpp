//============================================================================
// Name        : Clase9_Ejemplo2.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Box.h"
#include "Carton.h"

int main() {
	// Crea 4 objetos Carton
	Carton carton1; std::cout << std::endl;
	Carton carton2 {"Cartón delgado"}; std::cout << std::endl;
	Carton carton3 {4.0, 5.0, 6.0, "Plastico"}; std::cout << std::endl;
	Carton carton4 {2.0, "papel"}; std::cout << std::endl;

	std::cout << "Volumen carton1: " << carton1.volume() << std::endl;
	std::cout << "Volumen carton2: " << carton2.volume() << std::endl;
	std::cout << "Volumen carton3: " << carton3.volume() << std::endl;
	std::cout << "Volumen carton4: " << carton4.volume() << std::endl;


	std::cout << "\n\nPRUEBA DE CONSTRUCTOR DE COPIA EN CLASE DERIVADA" << std::endl;
	// Declara e inicializa un objeto Carton
	Carton carton(20.0, 30.0, 40.0, "Papel glassine");
	std::cout << std::endl;
	Carton cartonCopy(carton); // Invoca al constructor de copia
	std::cout << std::endl;
	std::cout << "Volumen de carton: " << carton.volume() << std::endl
			  << "Volumen de cartonCopy: " << cartonCopy.volume() << std::endl;


	// PRUEBA CONSTRUCTORES SIN ARGUMENTOS NO SE HEREDAN.
	//Carton cart;

	// PRUEBA DESTRUCTORES
	/*Carton carton;
	Carton candyCarton{50.0, 30.0, 20.0, "Carton fino"};
	std::cout << "Volumen de carton:" << carton.volume() << std::endl;
	std::cout << "Volumen de candyCarton: " << candyCarton.volume() << std::endl;*/



	return 0;
}

