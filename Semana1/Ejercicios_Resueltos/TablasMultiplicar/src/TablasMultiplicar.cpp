//============================================================================
// Name        : Primero.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main() {

	size_t table_size {};		// almacena tama�o tabla ingresado por usuario.
	const size_t MIN_SIZE {2}; //tama�o minimo de la tabla de multiplicar
	const size_t MAX_SIZE {12};	// tama�o maximo de la tabla de multiplicar.

	cout << "Ingrese tama�o de la tabla (entre "
			<< MIN_SIZE << " y "<< MAX_SIZE << "): ";

	cin >> table_size;	// requerir tama�o tabla.

	// si se selecciona tama�o de tabla no v�lido, salir
	if((table_size < MIN_SIZE)||(table_size > MAX_SIZE)){

		cout << "Tama�o de tabla no v�lido, programa terminado\n";

		return 1;	// tama�o fuera de limites establecidos.
	}

	cout << "\n";

	/*
	 * GENERAR TABLA table_size x table_size
	 */

	cout << setw(6) << " |";
	for(size_t i{1}; i <= table_size; i++){

		cout << " " << setw(3) << i << " |";
	}
	cout << "\n";

	const string lines(6 * (table_size+1), '-');

	cout << lines << "\n";

	for(size_t i{1}; i<=table_size; i++)
	{
		cout << " " << setw(3) << i << " |";

		for(size_t j{1}; j <= table_size; j++)
		{
			cout << " " << setw(3) << i*j << " |";
		}

		cout << endl;
	}

}
