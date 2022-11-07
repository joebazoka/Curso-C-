//============================================================================
// Name        : Clase10_Colecciones_Polimorficas.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : EJEMPLO 06 - APUNTE C++ - POLIMORFISMO
//============================================================================

// Vectores polimórficos de punteros inteligentes
#include <iostream>
#include <memory>
#include <vector>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"

int main()
{
// Cuidado: este primer intento de una colección mixta es una mala idea (¡corte de objetos!)(object slicing)
	std::vector<Box> boxes;
	boxes.push_back(Box{20.0, 30.0, 40.0});
	boxes.push_back(ToughPack{20.0, 30.0, 40.0});
	boxes.push_back(Carton{20.0, 30.0, 40.0, "plastic"});

	for (const auto& p : boxes)
		p.showVolume();

	std::cout << std::endl;

	// Ahora creamos un vector<> polimórfico propio:
	std::vector<std::unique_ptr<Box>> polymorphicBoxes;
	polymorphicBoxes.push_back(std::make_unique<Box>(20.0, 30.0, 40.0));
	polymorphicBoxes.push_back(std::make_unique<ToughPack>(20.0, 30.0, 40.0));
	polymorphicBoxes.push_back(std::make_unique<Carton>(20.0, 30.0, 40.0, "plastic"));

	for (const auto& p : polymorphicBoxes)
		p->showVolume();
}
