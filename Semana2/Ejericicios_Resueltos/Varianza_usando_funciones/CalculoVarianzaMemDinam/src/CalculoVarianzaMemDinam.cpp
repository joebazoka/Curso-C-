//============================================================================
// Name        : CalculoVarianzaMemDinam.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Calculo de varianza de una poblacion utilizando reserva
//				 dinamica de memoria.
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
#include <memory>
#include "Estadistica/CalculosEstadisticos.h"

using namespace std;


int main() {

	cout << string(50, '-') << endl;
	cout << " Calculo de varianza de muestras de temperatura" << endl;
	cout << string(50, '-') << "\n\n";

	cout << " Ingrese cantidad de muestras a procesar: ";

	size_t cantMuestras {};		// cantidad de muestras a procesar

	cin >> cantMuestras;		// solicita a usuario cantidad de muestras a procesar.

	double *muestras {new double[cantMuestras]};	// reservamos bloque de memoria (array) para resguardar muestras.

	// solicitamos ingreso de muestras por teclado.
	for(size_t i{}; i < cantMuestras; i++)
	{
		cin >> muestras[i];
	}

	//******** Calculo valor medio de las muestras (utilizando funciones)*****
	double valorMedio {calcMedia(muestras, cantMuestras)};

	//******** Calculo varianza (utilizando funciones)******
	double varianza {calcVarianza(muestras, cantMuestras, valorMedio)};

	// liberamos memoria reservada y reestablecemos puntero.
	delete[] muestras;
	muestras = nullptr;

	cout << "Varianza calculada: " << fixed << setprecision(2) << varianza << endl;

	return 0;
}
