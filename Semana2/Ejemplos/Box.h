/*
 * Box.h
 *
 *  Created on: 3 may. 2022
 *      Author: José
 */

#ifndef BOX_H_	// impide la inclusión recursiva
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
	double volume(); // Método para calcular el volume de una caja.
};


#endif /* BOX_H_ */
