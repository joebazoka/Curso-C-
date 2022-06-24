//============================================================================
// Name        : DigitosPrimos.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Determina si todos los digitos de un numero de 4 cifras son primos.
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

const unsigned int LISTA_PRIMOS[] {2, 3, 5, 7};

const unsigned int CANT_PRIMOS {4};

bool isPrimo(unsigned int digito)
{
	bool isPrimo {};	// utilizada para establecer un unico punto de retorno (buena practica)

	for(unsigned int primo : LISTA_PRIMOS){

		if(digito == primo){
			isPrimo = true;		// el digito es un numero primo.
			break;				// romper lazo.
		}
	}
	return isPrimo;
}

int main() {

	unsigned int numero{}, back {};

	cout << "Ingrese un numero de 4 digitos: ";
	cin >> numero;
	cout << endl;

	back = numero;

	// La estructura del siguiente if es solo valida para C++17.
	if(unsigned int contDigPrimos {}; static_cast<int>((log10(numero)+1)) == 4 ){

		for(unsigned int i{}; i < 4; ++i){

			if(isPrimo(numero % 10)) contDigPrimos ++;
			numero /= 10;
		}

		if(contDigPrimos == 4){
			cout << "Todos los dígitos del número " << back
				<< " son primos" << endl;
		}else{
			cout << "No todos los digitos del numero " << back
					<< " son primos" << endl;
		}


	}else{
		cout << "El numero ingresado no tiene 4 digitos " << endl;
	}


	return 0;
}
