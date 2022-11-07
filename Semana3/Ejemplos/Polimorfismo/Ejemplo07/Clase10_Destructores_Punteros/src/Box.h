/*
 * Box.h
 *
 *  Created on: 9 may. 2022
 *      Author: Jose
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
	// M�todo que muestra el volumen de un objeto

	void showVolume() const
	{ std::cout << "Volumen utilizable de Box: " << volume() << std::endl; }

	// M�todo que calcula el volumen de un objeto.
	virtual double volume() const { return length * width * height; }

	~Box() { std::cout << "Destructor de Box llamado" << std::endl; }

};


#endif /* BOX_H_ */
