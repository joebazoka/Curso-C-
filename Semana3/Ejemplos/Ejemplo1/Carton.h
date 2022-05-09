/*
 * Carton.h
 *
 *  Created on: 8 may. 2022
 *      Author: José
 */

#ifndef CARTON_H_
#define CARTON_H_

#include <string>
#include <string_view>
#include "Box.h"

class Carton : private Box
{
private:
	std::string material;

public:
	Carton() {std::cout << "Constructor Carton" << std::endl;}
	explicit Carton(std::string mat /*= "Cardboard"*/): material{mat} {} // Constructor

	using Box::volume;
};


#endif /* CARTON_H_ */
