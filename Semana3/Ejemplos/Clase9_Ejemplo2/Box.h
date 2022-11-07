/*
 * Box.h
 *
 *  Created on: 8 may. 2022
 *      Author: Lorenzo
 */

#ifndef BOX_H_
#define BOX_H_

#include <iostream>

class Box
{
protected:
	double length {1.0};
	double width {1.0};
	double height {1.0};
public:
	// Constructores
	Box(double lv, double wv, double hv) : length{lv}, width{wv}, height{hv}
	{ std::cout << "Box(double, double, double) llamado.\n"; }

	explicit Box(double side) : Box{side, side, side}	//Cubo
	{ std::cout << "Box(double) llamado.\n"; }

	Box() { std::cout << "Box() llamado.\n"; } // Constructor sin argumentos.
	double volume() const { return length * width * height; }

	// Constructor de copia
	Box(const Box& box) : length{box.length}, width{box.width}, height{box.height}
	{ std::cout << "Constructor de copia de Box" << std::endl; }


	// getters
	double getLength() const { return length; }
	double getWidth() const { return width; }
	double getHeight() const { return height; }

	~Box(){
		std::cout << "Destructor Box." << std::endl;
	}
};


#endif /* BOX_H_ */
