// Box.cpp
#include "Box.h"
#include <iostream>

// Definicion de constructor
Box::Box(double lengthValue, double widthValue, double heightValue)
{
	std::cout << "Constructor de Box llamado." << std::endl;
	length = lengthValue;
	width = widthValue;
	height = heightValue;
}
Box::Box(double aSide):Box{aSide, aSide, aSide}
{

}

// Método para calcular el volumen de un caja.
double Box::volume()
{
	return length * width * height;
}
