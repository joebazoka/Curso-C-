/*
 * Carton.h
 *
 *  Created on: 8 may. 2022
 *      Author: Lorenzo
 */

#ifndef CARTON_H_
#define CARTON_H_

#include <iostream>
#include "Box.h"

class Carton : public Box
{
private:
	std::string material {"Cardboard"};
public:
	Carton(double lv, double wv, double hv, std::string mat) : Box{lv, wv, hv}, material{mat}
	{ std::cout << "Carton(double,double,double,string) llamado.\n"; }

	explicit Carton(std::string mat) : material{mat}
	{ std::cout << "Carton(string) llamado.\n"; }

	Carton(double side, std::string mat) : Box{side}, material{mat}
	{ std::cout << "Carton(double,string) llamado.\n"; }

	// Si quiere rastrear la ejecución del constructor sin parámetros
	// a través de cout utilice el constructor por defecto
	// creado por ud, sino indiquele al compialdor que cree
	// el constructor por defecto.
	//Carton() { std::cout << "Carton() llamado.\n"; }
	Carton()=default;

	// Constructor de copia de Carton
	Carton(const Carton& carton) : material {carton.material}
	{ std::cout << "Constructor de copia de Carton" << std::endl; }

	/*~Carton(){
		std::cout << "Destructor Carton. Material: " << material << std::endl;
	}*/
};



#endif /* CARTON_H_ */
