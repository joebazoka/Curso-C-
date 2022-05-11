//============================================================================
// Name        : Clase11_Excepciones.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO01 - CURSO C++ - EXCEPCIONES
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int test{3};

	try
	{
		if (test > 5)
			throw "test es mayor que 5"; // Lanza una excepcion de tipo const char*

		// C�digo que se ejecuta si no se produce una excepci�n
	}
	catch (const char* message)
	{
		// C�digo para procesar exxepcion
		// ...que se ejecuta si se lanza una excepci�n de tipo 'char*' o 'const char*'
		std::cout << message << std::endl;
	}

	for (size_t i {}; i < 7; ++i)
		{
			try
			{
				if (i < 3)
					throw i;

				std::cout << "Valor de i: " << i << std::endl;

				if (i > 5)
					throw "Valor ilegal..excepcion > 5";

				std::cout << "Fin de bloque try." << std::endl;
			}
			catch (size_t i) // Atrapa excepciones de tipo size_t
			{
				std::cout << "Excepci�n capturada, i: " << i << std::endl;
			}
			catch (const char* message) // Atrapa excepciones de tipo char*
			{
				std::cout << "Excepci�n capturada - valor: \"" << message << '"' << std::endl;
			}

			std::cout << "Fin del cuerpo for" << " Valor de i:" << i << std::endl;
		}

}


