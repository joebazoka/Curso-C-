/*
 * Elipse.cpp
 *
 *  Created on: 6 jul. 2022
 *      Author: Jose
 */

#include <iostream>
#include "Elipse.h"

Elipse::Elipse(double pradio_mayor, double pradio_menor): radio_mayor{pradio_mayor}, radio_menor {pradio_menor}
{

}

// this apunta a elipse1
Elipse *Elipse::setRadioMayor(double pradio_mayor/*, Elipse *this*/)
{
	this->radio_mayor = pradio_mayor;

	return this;
}

Elipse *Elipse::setRadioMenor(double pradio_menor)
{
	this->radio_menor = pradio_menor;	//this.radio_menor ...radio_menor

	return this;
}

/*
void Elipse::setRadioMayor(double pradio_mayor)
{
	radio_mayor = pradio_mayor;
}

void Elipse::setRadioMenor(double pradio_menor)
{
	radio_menor = pradio_menor;
}
*/

double Elipse::getRadioMayor() const
{
	return radio_mayor;
}

double Elipse::getRadioMenor() const
{
	return radio_menor;
}

// Implementación destructor Elipse.
Elipse::~Elipse()
{
	std::cout << "Destructor de Elipse invocado.." << std::endl;
}
