//============================================================================
// Name        : Ejercicio_String_Iteraciones.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Cifrado Cesar modificado.
//============================================================================

#include <iostream>

using namespace std;

const unsigned int SHIFT {3};

int main() {

	string mensaje;
	string mensaje_codif {};

	cout << "Ingrese mensaje a encriptar: ";
	getline(cin, mensaje);
	cout << endl;

	size_t string_size {mensaje.length()};

	cout << mensaje << endl;

	// invierto cadena ingresada y la resguardo en mensaje codificado.
	for(size_t i {0}; i < string_size; ++i)
	{
		mensaje_codif += mensaje[string_size - i - 1] + SHIFT;
	}

	cout << "Mensaje encriptado: " << mensaje_codif << "\n\n\n";

	// Reconstruir mensaje original
	cout << "Desencriptando mensaje..." << "\n\n";
	mensaje = "";
	string_size = mensaje_codif.length();
	for(size_t i{0}; i < string_size; ++i){
		mensaje += mensaje_codif[string_size - i - 1] - SHIFT;
	}

	cout << "Mensaje original: " << mensaje << endl;
	return 0;
}
