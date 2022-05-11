//============================================================================
// Name        : Clase11_Excepciones_FugasRecursos.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 08 - CURSO C++ - EXCEPCIONES - FUGAS RECURSOS
//============================================================================

// EJEMPLO 08. Excepciones que resultan en pérdidas de recursos.
#include <iostream>
#include <cmath>
#include "MyTroubles.h"

double DoComputeValue(double); // Función que calcula un valor simple
double* ComputeValues(size_t howMany); // Función que realiza un calculo sobre un array

int main()
{
	try
	{
		double* values = ComputeValues(10000);
		// desafortunadamente, no llegaremos tan lejos..
		delete[] values;
	}
	catch (const Trouble&)
	{
		std::cout << "Excepción capturada!" << std::endl;
	}
}
/*
double* ComputeValues(size_t howMany)
{
	double* values = new double[howMany];

	for (size_t i = 0; i < howMany; ++i)
		values[i] = DoComputeValue(i);

	return values;
}
*/
double* ComputeValues(size_t howMany)
{
	double* values = new double[howMany];
	try
	{
		for (size_t i = 0; i < howMany; ++i)
			values[i] = DoComputeValue(i);

		return values;
	}
	catch (const Trouble&)
	{
		std::cout << "Problema detectado... Liberando memoria..." << std::endl;
		delete[] values;
		throw;
	}
}

double DoComputeValue(double value)
{
	if (value < 100)
			return std::sqrt(value); // Retorna raiz cuadrada de value
	else
		throw Trouble{"Problema de computo!!"};
}

/*
class DoubleArrayRAII final
{
private:
	double* resource;
public:
	DoubleArrayRAII(size_t size) : resource{ new double[size] } {}
	~DoubleArrayRAII()
	{
		std::cout << "Liberando memoria..." << std::endl;
		delete[] resource;
	}

	// Borrar constructor de copia y operador de asignación.
	DoubleArrayRAII(const DoubleArrayRAII&) = delete;
	DoubleArrayRAII& operator=(const DoubleArrayRAII&) = delete;

	// Operador de subíndice de array
	double& operator[](size_t index) noexcept { return resource[index]; }
	const double& operator[](size_t index) const noexcept { return resource[index]; }

	// Función para acceder al recurso encapsulado
	double* get() const noexcept { return resource; }

	// Función para indicar al objeto RAII que entregue el recurso.
	// Una vez llamado, el objeto RAII ya no liberará el recurso tras
	// la destrucción. Devuelve el recurso en el proceso.
	double* release() noexcept
	{
		double* result = resource;
		resource = nullptr;
		return result;
	}
};
*/



