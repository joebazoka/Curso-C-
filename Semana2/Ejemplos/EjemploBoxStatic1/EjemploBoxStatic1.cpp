//============================================================================
// Name        : EjemploBoxStatic1.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejemplo completo de uso de campo static
//				 e implemntación de método destructor.
//============================================================================

#include <iostream>
#include <memory>
#include "Box.h"

using namespace std;

int main() {

	std::cout << "Existen: " << Box::getObjectCount() << " objetos Box." << std::endl;

	const Box box1 {2.0, 3.0, 4.0};
	Box box2 {5.0}; // Un cubo

	std::cout << "Existen: " << Box::getObjectCount() << " objetos Box." << std::endl;

	for (double d {} ; d < 3.0 ; ++d)
	{
		Box box {d, d + 1.0, d + 2.0};
		std::cout << "Volumen de la caja es: " << box.volume() << std::endl;
	}
	std::cout << "Existen: " << Box::getObjectCount() << " objetos Box." << std::endl;

	auto pBox = std::make_unique<Box>(1.5, 2.5, 3.5);
	std::cout << "Volumen de pBox: " << pBox->volume() << std::endl;
	std::cout << "Existen: " << pBox->getObjectCount() << " objetos Box." << std::endl;

	return 0;
}
