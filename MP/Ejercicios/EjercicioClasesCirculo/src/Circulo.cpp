/*
 * Circulo.cpp
 *
 *  Created on: 5 jul. 2022
 *      Author: Jose
 */

#include "Circulo.h"
#include <cmath>
#include <iostream>

const double M_PI {3.14159265358979323846};

Circulo::Circulo(double pRadio):radio {pRadio}
{
}

Circulo::Circulo(const Circulo& circulo):radio {circulo.radio}
{
	//std::cout << "Constructor de copia ejecutado" << std::endl;
}

double Circulo::perimetro() const
{
	return (2 * M_PI * radio);
}


double Circulo::superficie() const
{
	return(M_PI * radio * radio);
}

double Circulo::getRadio(){
	return this->radio;
}

void Circulo::setRadio(double radio) {
	this->radio = radio;
}
