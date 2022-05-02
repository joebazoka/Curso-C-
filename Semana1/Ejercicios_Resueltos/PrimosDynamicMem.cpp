//============================================================================
// Name        : PrimosDynamicMem.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Calcula numeros primos utilizando memoria dinamica
//				 para almacenarlos.
//============================================================================
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  size_t cant_primos {};                                     // Cantidad de primos a listar.
  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	 // Ingresado por teclado
  while(cant_primos == 0){
	  cout << "Cuantos nros primos desea ver:? ";
	  cin >> cant_primos;                               // Read number required

	  if(cant_primos == 0) cout << "Valor no valido: " << endl;
  }

  auto *primos {new unsigned int[cant_primos]};            // Reservar memoria para array primos.

  size_t contador_primos {1};
  primos[0] = 2;                                             // Primer primo.

  unsigned primo_candidato {3};                            // Primer primo candidadto.

  while (contador_primos < cant_primos)
  {
    bool isPrimo {true};                                     // Indica si primo fue hallado.

    const auto limite = static_cast<unsigned int>(sqrt(primo_candidato));
    for (size_t n {}; primos[n] <= limite && isPrimo; ++n)
    {
      isPrimo = primo_candidato % primos[n] > 0;              // Si la división no es exacta, es primo.
    }

    if (isPrimo)                                             // Es nro primo?
      primos[contador_primos++] = primo_candidato;           // si, almacenar.

    primo_candidato += 2;                                    // Proximo candidato a chequear
  }

  // Imprimir lista de primos
  for (size_t n{}; n < cant_primos; ++n)
  {
    cout << primos[n] << endl;
  }

  delete[] primos;                                           // Liberar memoria reservada.
  primos = nullptr;                                          // Limpiar puntero.
}
