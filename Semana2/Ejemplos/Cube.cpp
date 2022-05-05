/*
 * Cube.cpp
 *
 *  Created on: 4 may. 2022
 *      Author: Jose
 */
#include <iostream>
#include "Cube.h"

Cube::Cube(double aSide) : side{aSide}
{
	std::cout << "Cube constructor called." << std::endl;
}

double Cube::volume() {
	return side * side * side;
}

bool Cube::hasLargerVolumeThan(Cube aCube) {
	return volume() > aCube.volume();
}

