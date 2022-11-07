//============================================================================
// Name        : Rethrowing_Excep.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO06 - CURSO C++ - EXCEPCIONES
//============================================================================


// Relanzamiento de excepciones
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
			try
			{
				if (i == 3)
					throw trouble;
				else if (i == 5)
					throw moreTrouble;
				else if (i == 6)
					throw bigTrouble;
			}
			catch (const Trouble& t)
			{
				if (typeid(t) == typeid(Trouble))
					std::cout << "Objeto Trouble capturado en bloque interno: " << t.what() << std::endl;
				else
					//throw; // Relanzar excepción actual
					throw t; // ¿Dara el mismo resultado que la sentencia anterior?
			}
		}
		catch (const Trouble& t)
		{
			std::cout << typeid(t).name() << " object capturado en bloque externo: "
					<< t.what() << std::endl;
		}
		std::cout << "Fin de for loop (despues de los bloques catch) - i es " << i << std::endl;
	}
}
