/*
 * Box.h
 *
 *  Created on: 3 may. 2022
 *      Author: Jos�
 */

#ifndef BOX_H_	// impide la inclusi�n recursiva
#define BOX_H_

class Box
{
private:
	double length {1.0};
	double width {1.0};
	double height {1.0};

public:
	// Constructores
	Box(double lengthValue, double widthValue, double heightValue);
	Box(double aSide);
	Box() = default;
	double volume(); // M�todo para calcular el volume de una caja.
};


#endif /* BOX_H_ */
