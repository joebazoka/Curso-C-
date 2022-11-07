//============================================================================
// Name        : Clase9_Excepciones_Matching.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO04 - CURSO C++ - EXCEPCIONES
//============================================================================

// Lanzar y atrapar objetos en una jerarquía de clases
#include <iostream>
#include "MyTroubles.h"

int main()
{
	Trouble trouble;
	MoreTrouble moreTrouble;
	BigTrouble bigTrouble;

	for (int i {}; i < 7; ++i)
	{
		try
		{
			if (i == 3)
				throw trouble;
			else if (i == 5)
				throw moreTrouble;
			else if (i == 6)
				throw bigTrouble;
	}

	catch (const BigTrouble& t)	// Clase derivada de MoreTrouble
	{
		std::cout << "Objeto BigTrouble atrapado: " << t.what() << std::endl;
	}
	catch (const MoreTrouble& t)	// Clase derivada de Trouble
	{
		std::cout << "Objeto MoreTrouble object atrapado: " << t.what() << std::endl;
	}
	catch (const Trouble& t)		// Clase Base
	{
		std::cout << "Objeto Trouble atrapado: " << t.what() << std::endl;
	}
		std::cout << "Fin de the for loop (despues de los bloques catch) - i es " << i << std::endl;
	}
}
