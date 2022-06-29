//============================================================================
// Name        : TablaEntradaSalida.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>


int main() {

	const unsigned int LINEA_ENCAB1 {11};
	const unsigned int LINEA_ENCAB2 {12};
	const unsigned int LINEA_ENCAB3 {9};


	std::cout << "\n";

	std::cout << std::setw(25) << "Movimientos Anuales" << std::endl;

	std::string linea(31, '-');

	std::cout << linea << "\n";
	std::cout << std::setw(LINEA_ENCAB1) << "| " << std::setw(LINEA_ENCAB2) << "Entrada |" << std::setw(LINEA_ENCAB3)
			  << "Salida |"<< std::endl;

	std::cout << linea << "\n";

	std::cout << std::setw(LINEA_ENCAB1) << " Enero | " << std::setw(LINEA_ENCAB2) << " |" << std::setw(LINEA_ENCAB3)
			  << " |" << std::endl;

	std::cout << linea << "\n";

	std::cout << std::setw(LINEA_ENCAB1) << " Febrero | " << std::setw(LINEA_ENCAB2) << " |" << std::setw(LINEA_ENCAB3)
			  << " |" << std::endl;

	std::cout << linea << "\n";

	std::cout << std::setw(LINEA_ENCAB1) << " Marzo | " << std::setw(LINEA_ENCAB2) << " |" << std::setw(LINEA_ENCAB3)
			  << " |" << std::endl;

	std::cout << linea << "\n";

	std::cout << std::endl;
	return 0;
}
