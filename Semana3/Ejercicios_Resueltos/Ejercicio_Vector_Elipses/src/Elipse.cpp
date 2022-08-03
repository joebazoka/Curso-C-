/*
 * Elipse.cpp
 *
 *  Created on: 6 jul. 2022
 *      Author: Jose
 */

#include <iostream>
#include "Elipse.h"


Elipse::Elipse(double pradio_mayor, double pradio_menor): radio_menor {pradio_menor}, radio_mayor{pradio_mayor}
{
}


void Elipse::setRadioMenor(double radio_menor)
{
	this->radio_menor = radio_menor;
}

double Elipse::superficie() const
{
	return(3.14159265359 *  radio_menor * radio_mayor);
}

double Elipse::getRadioMayor() const {
	return radio_mayor;
}

void Elipse::setRadioMayor(double radioMayor) {
	radio_mayor = radioMayor;
}

double Elipse::getRadioMenor() const {
	return radio_menor;
}
