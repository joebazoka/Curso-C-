//============================================================================
// Name        : CalculoVarianzaMemDinamUnique.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Calculo de varianza de una poblacion utilizando reserva
//				 dinamica de memoria con punteros inteligentes.
//============================================================================

#include <iostream>
#include <iomanip>
#include <memory>
#include <cmath>

using namespace std;

int main() {

	cout << string(50, '-') << endl;
		cout << " Calculo de varianza de muestras de temperatura" << endl;
		cout << string(50, '-') << "\n\n";

		cout << " Ingrese cantidad de muestras a procesar: ";

		size_t cantMuestras {};		// cantidad de muestras a procesar

		cin >> cantMuestras;		// solicita a usuario cantidad de muestras a procesar.

		// reservamos memoria dinamicamente utilizando unique_ptr (puntero inteligente).
		auto muestras {make_unique<double[]>(cantMuestras)};

		// solicitamos ingreso de muestras por teclado.
		for(size_t i{}; i < cantMuestras; i++)
		{
			cin >> muestras[i];
		}

		//******** Calculo valor medio de las muestras (sin utilizar funciones)******

		double sumaMuestras {};		// almacena suma muestras para calcular valor medio.
		double valorMedio {};		// almacena valor medio calculado.

		// calculo suma de las muestras para calcular valor medio.
		for(size_t i{}; i< cantMuestras; i++)
		{
			sumaMuestras += muestras[i];
		}

		// calculo valor medio.
		//valorMedio = cantMuestras > 0 ? (sumaMuestras / cantMuestras) :0;
		if(cantMuestras > 0)
			valorMedio = sumaMuestras / cantMuestras;
		else
			valorMedio = 0;

		//******** Calculo varianza (sin utilizar funciones)******
		double varianza {};		// almacena valor varianza

		for(size_t i{}; i< cantMuestras; i++)
		{
			varianza += pow((muestras[i] - valorMedio), 2); // sumatoria((xi - valorMedio)^2)
		}

		//varianza = cantMuestras > 0 ? (varianza / cantMuestras) : 0;
		if(cantMuestras > 0)
			varianza /= cantMuestras;
		else
			varianza = 0;

		cout << "Varianza calculada: " << fixed << setprecision(2) << varianza << endl;

		return 0;
}
