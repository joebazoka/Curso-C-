/*
 * CalculosEstadisticos.cpp
 *
 *  Created on: 1 jul. 2022
 *      Author: Lorenzo
 */

#include <iostream>
#include <cmath>


double calcMedia(double datos[], size_t size)
{
double suma {};

	for(size_t i{}; i < size; i++)
	{
		suma += datos[i];
	}

	if(size > 0)
		return (suma / size);
	else
		return 0;
}

double calcVarianza(double datos[], size_t size, double valorMedio)
{
	double varianza{};

	for(size_t i{}; i < size; i++)
	{
		varianza += pow((datos[i] - valorMedio), 2); // sumatoria((xi - valorMedio)^2)
	}

	if(size > 0)
		return(varianza / size);
	else
		return(0);
}
