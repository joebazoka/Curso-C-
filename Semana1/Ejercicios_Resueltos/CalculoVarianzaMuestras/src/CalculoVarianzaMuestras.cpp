//============================================================================
// Name        : CalculoVarianzaMuestras.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Calcula la varianza de una muestra de temperaturas
//============================================================================

#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	cout << string(50, '-') << endl;
	cout << " Calculo de varianza de muestras de temperatura" << endl;
	cout << string(50, '-') << "\n\n";

	cout << " Ingrese muestras de temperaturas" << endl;

	vector<double> muestras;	// almacena muestras de temperatura
								// para calculos posteriores

	char answer;				// almacena respuesta de usuario.

	do{

		double temper{};			// resguarda muestra ingresada.

		cin >> temper;

		cout << endl;

		muestras.push_back(temper);	// almaceno muestra en vector.

		do{
			cout << "Desea ingresar mas datos? (y/n) ";
			cin >> answer;
			cout << endl;

		}while(answer != 'y' && answer != 'n');	// verifica que la respuesta sea valida.


	}while(answer == 'y');

	//******** Calculo valor medio de las muestras (sin utilizar funciones)******

	double sumaMuestras {};
	double valorMedio {};

	for(double valor : muestras)
	{
		sumaMuestras += valor;
	}

	//
	valorMedio = muestras.size() > 0 ? (sumaMuestras / muestras.size()) :0;

	//******** Calculo varianza (sin utilizar funciones)******
	double varianza {};

	for(double valor : muestras)
	{
		varianza += pow((valor - valorMedio), 2); // sumatoria((xi - valorMedio)^2)
	}

	varianza = muestras.size() > 0 ? (varianza / muestras.size()) : 0;

	cout << "Varianza calculada: " << fixed << setprecision(2) << varianza << endl;

	return 0;
}
