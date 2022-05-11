//============================================================================
// Name        : Clase11_ExcepcionesAnid.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO02 - CURSO C++ - EXCEPCIONES
//============================================================================


// Lanzando excepciones en bloques try anidados
#include <iostream>


void throwIt(int i)
{
	throw i; // Lanza el valor del parametro
}

int main()
{
	for (int i {}; i <= 5; ++i)
	{
		try
		{
			std::cout << "try externo:\n";

			if (i == 0)
				throw i; // Lanza una excepcion int

			if (i == 1)
				throwIt(i); // Llama a una función que lanza un entero

			try
			{ // Bloque try anidado.
				std::cout << "try interno:\n";

				if (i == 2)
					throw static_cast<long>(i); // Lanza excepción long

				if (i == 3)
					throwIt(i); // Llama a una función que lanza un entero
			} // Fin de bloque try anidado

			catch (int n)
			{

				std::cout << "Atrapo int para el try interno. " << "Exception " << n << std::endl;
			}

			std::cout << "try externo:\n";
			if (i == 4)
				throw i; // Lanza int

			throwIt(i); // Llama a una función que lanza un entero
		}
		catch (int n)
		{
			std::cout << "Atrapo int para el try externo. " << "Excepcion " << n << std::endl;
		}
		catch (long n)
		{
			std::cout << "Atrapo long para el try externo. " << "Excepcion " << n << std::endl;
		}
	}
}
