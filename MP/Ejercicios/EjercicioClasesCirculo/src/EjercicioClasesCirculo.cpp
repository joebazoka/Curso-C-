//============================================================================
// Name        : EjercicioClasesCirculo.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Circulo.h"

using namespace std;


void print(const Circulo& circulo, unsigned int circulo_id)
{
	cout << "Perimetro de circulo" << circulo_id << ": " << circulo.perimetro() << endl;
	cout << "Superficie de circulo" << circulo_id << ": " << circulo.superficie() << endl;

	// dado que el parametro de la función es de tipo referncia a constante,
	// no puedo invocar metodos del objeto que no sean const dado que
	// no se puede asegurar que el metodo del objeto no cambie alguna de las varibales miembro.
	cout << circulo.superficie();
}

int main() {

	Circulo circulo1{2.8};
	Circulo circulo2{7.0};


	Circulo circuloX {circulo1};	// invoca al constructor de copia.

	cout << "CirculoX: " << circuloX.perimetro() << endl;

	cout << "Perimetro de circulo1: " << circulo1.perimetro() << endl;
	cout << "Superficie de circulo2: " << circulo1.superficie() << endl;
	cout << endl;

	Circulo circulo3 {circulo1};
	Circulo circulo4 {circulo2};

	cout << "Perimetro de circulo3: " << circulo2.perimetro() << endl;
	cout << "Superficie de circulo3: " << circulo2.superficie() << endl;
	cout << endl;

	cout << "Perimetro de circulo3: " << circulo3.perimetro() << endl;
	cout << "Superficie de circulo3: " << circulo3.superficie() << endl;
	cout << endl;

	cout << "Perimetro de circulo4: " << circulo4.perimetro() << endl;
	cout << "Superficie de circulo4: " << circulo4.superficie() << endl;
	cout << endl;

	cout << "El radio de circulo4 es: " << circulo4.getRadio() << endl;

	circulo4.setRadio(12.0);
	cout << "Nueva superficie de circulo4: " << circulo4.superficie() << endl;

	Circulo *ptr_circulo {&circulo4};

	cout << ptr_circulo->superficie() << endl;
	cout << (*ptr_circulo).superficie() << endl;

	return 0;
}
