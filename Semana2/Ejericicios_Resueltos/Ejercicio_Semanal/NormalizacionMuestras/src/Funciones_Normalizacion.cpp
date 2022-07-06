/*
 * Helpers_Funs.cpp
 *
 *  Created on: 4 jul. 2022
 *      Author: Jose
 */

#include "Funciones_Normalizacion.h"

#include <iostream>

// Encuentra el minimo de la muestra
const double *find_min(const double *samples, size_t size)
{
const double *ptr_success{};	// para establecer un solo punto de retorno.

	if(size){

		size_t ind_min{};

		for(size_t ind{}; ind < size; ++ind)
		{
			if(samples[ind_min] > samples[ind])
				ind_min = ind;
		}
		ptr_success = &samples[ind_min];
	}
	return ptr_success;		// es mas sencillo devolver el indice,
							// esto se hace asi para ejemplificar
							// la devolucion de punteros.
}

// encuentra el maximo de la muestra
const double *find_max(const double *samples, size_t size)
{
const double *ptr_success{};		// para establecer un solo punto de retorno.

	if(size){

		size_t ind_max{};

		for(size_t ind{}; ind < size; ++ind)
		{
			if(samples[ind_max] < samples[ind])
				ind_max = ind;
		}

		ptr_success = &samples[ind_max];
	}
	return ptr_success;		// es mas sencillo devolver el indice,
							// esto se hace asi para ejemplificar
							// la devolucion de punteros.
}


void shift_samples(double *samples, double *normal, size_t size, double delta)
{
	for(size_t ind{}; ind < size; ++ind)
	{
		normal[ind] = samples[ind] - delta;

	}
}

void scale_samples(double *normal, size_t size, double denomin)
{

	if(size){
		if(denomin)
		{
			for(size_t ind{}; ind < size; ++ind)
			{
				normal[ind] /= denomin;	// normalize
			}

		}
	}
}


void normalize(double *samples, double *normalized_samples, size_t size)
{

	const double *min {find_min(samples, size)};
	const double *max {find_max(samples, size)};

	if(max && min)
	{
		shift_samples(samples, normalized_samples, size, *min);
		scale_samples(normalized_samples, size, (*max - *min));
	}

}


