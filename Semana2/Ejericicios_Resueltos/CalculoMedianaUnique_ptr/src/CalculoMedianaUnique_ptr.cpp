//============================================================================
// Name        : CalculoMedianaUnique_ptr.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include <algorithm>


int main() {

	unsigned int cantDatos{};
	double mediana {};

	std::cout << "Ingrese cantidad de datos a procesar: ";

	std::cin >> cantDatos;

	std::cout << std::endl;

	if(cantDatos > 0){

		// Reservar memoria a través de unique_ptr.
		auto data {std::make_unique<double[]>(cantDatos)};

		std::cout << "Ingrese datos a procesar (enter luego de cada dato)" << std::endl;
		for(size_t i{}; i < cantDatos; ++i)
		{
			double dato{};

			std::cin >> dato;

			data[i] = dato;
		}

		std::cout << std::endl;
		std::sort(data.get(), data.get()+cantDatos);

		std::cout << "---Datos ingresados---" << std::endl;
		// Imrimir datos ordenados
		for(size_t i{}; i < cantDatos; ++i)
		{
			std::cout << data[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::string(20, '-') << std::endl;
		std::cout << std::endl;

		unsigned int central{cantDatos / 2};

		if(cantDatos % 2){

			mediana = data[central];

		}else{
			mediana = (data[central] + data[central - 1]) / 2;
		}

		std::cout << "Valor de la mediana: " << mediana << std::endl;
	}
}
