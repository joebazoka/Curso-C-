/*
 * Box.h
 *
 *  Created on: 10 may. 2022
 *      Author: Lorenzo
 */

#ifndef BOX_H_
#define BOX_H_

class Box
{
protected:
	double length {1.0};
	double width {1.0};
	double height {1.0};

	Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {}

public:
	virtual ~Box() = default; // Destructor virtual
	virtual double volume() const = 0; // Método para calcular el volumen
};



#endif /* BOX_H_ */
