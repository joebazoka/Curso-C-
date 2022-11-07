//============================================================================
// Name        : Clase11_Excepciones_Catching_Base_Class.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO05 - CURSO C++ - EXCEPCIONES
//============================================================================

// Atrapar excepciones con un controlador de clase base
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
		catch (const Trouble& t)	// Siempre se debe atrapar por referencia para evitar el object slicing!!
		{
			//std::cout << "Objeto Trouble object atrapado: " << t.what() << std::endl;
			std::cout << typeid(t).name() << " objeto capturado: " << t.what() << std::endl;
		}
		std::cout << "Fin de for loop (despues de los bloques catch) - i es " << i << std::endl;
	}
}

