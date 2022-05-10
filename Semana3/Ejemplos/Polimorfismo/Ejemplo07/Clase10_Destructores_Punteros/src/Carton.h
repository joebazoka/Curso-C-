/*
 * Carton.h
 *
 *  Created on: 9 may. 2022
 *      Author: Jose
 */

#ifndef CARTON_H_
#define CARTON_H_

#include <string>
#include <string_view>
#include "Box.h"

class Carton : public Box
{
private:
	std::string material;

public:
	// Constructor llama explícitamente al constructor de la clase base
	Carton(double lv, double wv, double hv, std::string_view str="cardboard")
	: Box{lv,wv,hv}, material{str}
	{}

	// Método para calcular el volumen del objeto Carton
	double volume() const
	{
		const double vol {(length - 0.5)*(width - 0.5)*(height - 0.5)};
		return vol > 0.0? vol : 0.0;
	}
	~Carton() { std::cout << "Destructor Carton llamado" << std::endl; }

};




#endif /* CARTON_H_ */
