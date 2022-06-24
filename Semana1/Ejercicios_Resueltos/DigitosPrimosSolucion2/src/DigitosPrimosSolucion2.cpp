//============================================================================
// Name        : DigitosPrimosSolucion2.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Determina si todos los digitos de un numero de 4 cifras son primos.
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned int numero{}, back {};

	cout << "Ingrese un numero de 4 digitos: ";
	cin >> numero;
	cout << endl;

	back = numero;

	// La estructura del siguiente if es solo valida para C++17.
	if(unsigned int contDigPrimos {}; static_cast<int>((log10(numero)+1)) == 4 ){

		for(unsigned int i{}; i < 4; ++i){

			switch(numero%10){

				case 2: case 3: case 5: case 7:
					contDigPrimos ++;
					break;
			}
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
