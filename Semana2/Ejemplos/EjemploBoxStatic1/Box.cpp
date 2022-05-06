// Box.cpp
#include "Box.h"
#include <iostream>
#include <ostream>

/// Constructor parametrizado.
Box::Box(double lengthValue, double widthValue, double heightValue)
{
	objectCount++;
	std::cout << "Constructor de Box llamado." << std::endl;
	length = lengthValue;
	width = widthValue;
	height = heightValue;
}

// Constructor parametrizado.
Box::Box(double aSide):Box{aSide, aSide, aSide}
{
}

// Constructor de copia.
Box::Box(const Box& box):Box{box.length, box.width, box.height}
{
	objectCount++;
	std::cout << "Constructor de copia personalizado" << std::endl;
}

Box::~Box()
{
	--objectCount;
	std::cout << "Destructor Box invocado" << std::endl;
}

// Método para calcular el volumen de un caja.
double Box::volume() const
{
	return length * width * height;
}

// Métodos para proveer acceso a los valores de miembros privados. getters
double Box::getLength() const
{
	//length = 15;
	return length;
}

double Box::getWidth() const { return width; }
double Box::getHeight() const { return height; }


// Métodos para modificar los valores de los campos privados. setters
void Box::setLength(double lv) { if (lv > 0) length = lv;}
void Box::setWidth(double wv) { if (wv > 0) width = wv; }
void Box::setHeight(double hv) { if (hv > 0) height = hv; }



double surfaceArea(const Box& aBox)
{
	return 2.0*(aBox.length*aBox.width + aBox.length*aBox.height +aBox.height*aBox.width);
}

