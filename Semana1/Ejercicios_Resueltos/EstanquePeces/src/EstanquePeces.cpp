//============================================================================
// Name        : EstanquePeces.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>        // Para utilizar función sqrt
#include <iomanip>

int main() {

    const double PI { 3.141592653589793238 };
    // 0.2 metros cuadrados de superficie de pileta por cada 15cm de pez.
    const double FACTOR_SUP_PEZ { 0.2 / 0.15 }; // Area por unidad de longitud del pez

    double cantidad_peces {}; // Numero de peces
    double longitud_pez {}; // Longitud promedio del pez

    std::cout << "Ingrese el numero de peces que desea colocar en la pileta: ";
    std::cin >> cantidad_peces;
    std::cout << "Ingrese la longitud promedio de pez: ";
    std::cin >> longitud_pez;

    // Calcular el area de pileta requerida para resguardar los peces
    const double AREA_REQ_PILETA {cantidad_peces * longitud_pez * FACTOR_SUP_PEZ};
    // Calcular el diámetro de la pileta.
    const double diametro_pileta {2.0 * std::sqrt(AREA_REQ_PILETA / PI)};
    std::cout << "\nDiametro de pileta para resguardar " << cantidad_peces << " peces es "
              << diametro_pileta << " metros.\n";
}
