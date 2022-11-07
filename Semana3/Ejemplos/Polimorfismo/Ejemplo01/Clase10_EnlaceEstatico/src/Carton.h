/*
 * Box.h
 *
 *  Created on: 9 may. 2022
 *      Author: Lorenzo
 */

#ifndef CARTON_H_
#define CARTON_H_

#include "Box.h"
#include <string>
#include <string_view>

class Carton : public Box
{
private:
	std::string material;
public:
	// Constructor llama expl�citamente al constructor de la clase base
	Carton(double lv, double wv, double hv, std::string_view str="cardboard")
	: Box{lv,wv,hv}, material{str}
	{}
	// Calcula el volumen de un objeto Carton
	double volume() const
	{
		const double vol {(length - 0.5)*(width - 0.5)*(height - 0.5)};
		return vol > 0.0? vol : 0.0;
	}
};




#endif /* CARTON_H_ */
