/*
 * Box.h
 *
 *  Created on: 9 may. 2022
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

public:
	Box() = default;
	Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {}
	// Método que muestra el volumen de un objeto

	void showVolume() const
	{ std::cout << "Volumen utilizable de Box:" << volume() << std::endl; }

	// Método que calcula el volumen de un objeto.
	virtual double volume() const { return length * width * height; }
};


#endif /* BOX_H_ */
