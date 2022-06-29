//============================================================================
// Name        : NumeroAmstrong.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Determina si un numero es un numero de Amstrong
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	unsigned int numero{}, numeroCalculado{};

	cout << "Ingrese un numero: " << endl;
	cin >> numero;

	if(numero > 0){

		unsigned int cantDigitos {static_cast<unsigned int>(log10(numero)+1)};
		unsigned char digito{};

		for(unsigned int i{}; i < cantDigitos; ++i)
		{
			digito = (numero / static_cast<unsigned int>(pow(10,i))) % 10;
			numeroCalculado += pow(digito, cantDigitos);
		}

		if(numeroCalculado == numero)
			cout << numero << " Es un numero de amstrong" << endl;
		else
			cout << numero << " No es un numero de amstrong" << endl;
	}

	return 0;
}
