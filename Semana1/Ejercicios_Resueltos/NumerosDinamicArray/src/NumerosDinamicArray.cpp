//============================================================================
// Name        : NumerosDinamicArray.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejercicio reserva memoria dinamica.
//============================================================================

/*
Escriba un programa que lea el tama�o de un array desde el teclado y asigne
din�micamente un array de ese tama�o para contener valores de punto flotante.
Usando la notaci�n de puntero, inicialice todos los elementos de la matriz para
que el valor del elemento en la posici�n de �ndice n sea 1 / (n + 1)^2.
Calcule la suma de los elementos utilizando la notaci�n de array,
multiplique la suma por 6 y obtenga la ra�z cuadrada de ese resultado.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  size_t n {};
  std::cout << "Ingrese el numero de elementos del array: ";
  std::cin >> n;

  auto* values = new double[n];	// Reservamos dinamicamente un array de n doubles.
  for (size_t i {}; i < n; ++i)
    *(values+i) = 1.0 / ((i + 1)*(i + 1));

  double sum {};
  for (size_t i {}; i < n; ++i)
    sum += values[i];

  // Presentamos resultado con 5 digitos decimales.
  std::cout << "El resultado es: " << std::setprecision(5) << std::sqrt(6.0 * sum) << std::endl;

  delete[] values;             // Liberamos memoria
  values = nullptr;				// No olvidar de asignar nullptr a puntero, recuerde
  	  	  	  	  	  	  	  // que values sigue conteniendo la direccion de la zona reservada
  	  	  	  	  	  	  	  // new double[n] aunque se haya liberado con delete[]...
}
