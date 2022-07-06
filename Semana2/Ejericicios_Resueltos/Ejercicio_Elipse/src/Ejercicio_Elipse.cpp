//============================================================================
// Name        : Ejercicio_Elipse.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Elipse.h"

using namespace std;


/*
En este caso si invoco a una funci�n que recibe por ejemplo
una referencia constante, tampoco puede acceder a los metodos
del objeto (elipse en este caso) a menos que los marque como const
dado que una referencia a constante no permite alterar el estado
del objeto, por tanto el compilador tampoco va a permitir llamar
a m�todos que no sean const.
*/
void printElipse(const Elipse& elipse)
{
	cout << "Radios mayor y menor de la elipse: " << elipse.getRadioMayor()
			<< " , " << elipse.getRadioMenor() << std::endl;
}

int main() {

	Elipse elipse1 {5.0, 2.0};

	printElipse(elipse1);
	// Ejemplo de obtenci�n del puntero this devuelto por los setters o mutadores.
	// Esta t�cnica se llama encadenamiento de metodos.
	// Cualquiera de los setters devuelve el puntero this del objeto, en este caso
	// el puntero this de elipse1. Luego con dicho puntero invocamos a cualquier otro
	// setter que tambien nos devuelve a this, con el cual podriamos invocar a
	// otro m�todo del objeto.
	elipse1.setRadioMayor(9.0)->setRadioMenor(5.0);

	const Elipse elipse2 {7.0, 3.0};		// objeto inmutable

	// Dado que el objeto elipse2 es inmutable, el compilador
	// no permitira que acceda a los m�todos p�blicos porque
	// asume que existe la posibilidad que en dichos m�todos
	// se modifiquen alguna de las variables miembro y esto
	// no esta permitido para objetos inmutables. El compilador
	// solo nos permite acceder a los m�todos marcados como const
	// ejemplo: double getRadioMenor() const
	// El calificador const colocado al final de la firma del m�todo
	// indica al compilador que este m�todo no puede modificar ninguna
	// variable miembro, si lo intentamos esto dispar� un error de compilaci�n.
	cout << "Radio mayor elipse: " << elipse1.getRadioMayor() << " - "
			<< "Radio menor elipse: " << elipse1.getRadioMenor() << endl;

	return 0;
}
