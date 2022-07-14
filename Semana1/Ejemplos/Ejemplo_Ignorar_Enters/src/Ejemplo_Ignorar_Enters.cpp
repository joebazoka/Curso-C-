//============================================================================
// Name        : Ejemplo_Ignorar_Enters.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejemplo de como limpiar \n del buffer de entrada (teclado)
//				 y luego ingresar strings que contengan espacios.
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

	unsigned int val;

	string cadena;

	cout << "Ingreso val: ";
	cin >> val;
	cout << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Ingrese cadena: ";

	getline(cin, cadena);
	cout << endl;

	cout << cadena << endl;

	cout << "Final del programa " << endl;

	return 0;
}
