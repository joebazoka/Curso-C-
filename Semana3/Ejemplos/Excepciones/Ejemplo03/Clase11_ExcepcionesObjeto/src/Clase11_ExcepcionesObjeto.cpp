//============================================================================
// Name        : Clase11_ExcepcionesObjeto.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO3 - CURSO C++ - EXCEPCIONES
//============================================================================

// Ejemplo03. Lanza un objeto de excepcion
#include <iostream>
#include "MyTroubles.h"

void trySomething(int i);

int main()
{
	for (int i {}; i < 2; ++i)
	{
		try
		{
			trySomething(i);
		}
		catch (const Trouble& t)
		{
			// Cual sera el problema?
			std::cout << "Excepcion: " << t.what() << std::endl;
		}
	}
}

void trySomething(int i)
{
	if (i == 0)
		throw Trouble {};
	else
		throw Trouble {"Nadie sabe el problema que he visto..."};
}
