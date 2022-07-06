//===============================================================================
// Name        : NormalizacionMuestras.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Normaliza un grupo de muestras ingresadas por teclado. Este tipo
//				 de normalización se utiliza en machine learning por ejemplo.
//				 Su proposito es acelerar la convergencia de los algoritmos de ML.
//================================================================================

#include <iostream>
#include <iomanip>
#include <vector>

#include "Funciones_Normalizacion.h"


void print_results(const double *muestras, const double *muestras_norm, size_t size)
{
	//
	std::cout << std::string(3, ' ') << std::string(46, '-') << std::endl;
	std::cout << std::setw(25) << "| Muestras originales |" << std::setw(25) << "Muestras normalizadas |"
				<< std::endl;
	std::cout << std::string(3, ' ') << std::string(46, '-') << std::endl;

	std::cout << std::fixed << std::setprecision(3);
	for(size_t i{}; i < size; ++i)
	{
		// ****Repetir este bloque hasta completar la cantidad de muestras ingresadas****
		std::cout << std::setw(3) << "|" << std::setw(20) << muestras[i] << " | " << std::setw(22)
				<< muestras_norm[i] << " | " << std::endl;

		std::cout << std::string(3, ' ') << std::string(46, '-') << std::endl;

		// ******************************************************************************
	}


}


int main() {

		std::vector<double> muestras;	//{25.2, 10.9, -6.8, 50.5, 3.3, 6.7, 8.9, 9.9, 11.8, -5.2};
		std::vector<double> muestras_normalizadas;

		std::cout << "Ingrese muestras."
					 << " Para finalizar ingrese valor mayor a 1000" << std::endl;
		while(true)
		{
			double muestra;		// Almacena muestra ingresada por teclado.

			std::cin >> muestra;

			if(muestra > 999.9) break;		// Si se ingresa temp > 900 se rompe ciclo.

			muestras.push_back(muestra);	// Valores validos a vector.
			muestras_normalizadas.push_back(muestra);
		}

		// tenga en cuenta que se crea muestras_normalizadas solo con el proposito de mantener
		// inalterable el vector de muestras originales para poder imprimirlo.

		normalize(muestras.data(), muestras_normalizadas.data(), muestras.size());

		print_results(muestras.data(), muestras_normalizadas.data(), muestras.size());

	return 0;
}
