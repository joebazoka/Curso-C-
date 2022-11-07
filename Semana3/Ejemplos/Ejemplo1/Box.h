/*
 * Box.h
 *
 *  Created on: 3 may. 2022
 *      Author: José
 */

#ifndef BOX_H_	// impide la inclusión recursiva
#define BOX_H_

#include <iostream>
#include <iomanip>

class Box
{
private:
	double length {1.0};
	double width {1.0};
	double height {1.0};

public:
	// Constructores
	Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {}
	Box(){std::cout << "Constructor Box" << std::endl;} //= default; // Constructor sin argumentos.


	double volume() const { return length*width*height; }

	// getters
	double getLength() const { return length; }
	double getWidth() const { return width; }
	double getHeight() const { return height; }

};


// toString C++ sobrecarga del operador <<
inline std::ostream& operator<<(std::ostream& stream, const Box& box)
{
	stream << " Box(" << std::setw(2) << box.getLength() << ','
	<< std::setw(2) << box.getWidth() << ','
	<< std::setw(2) << box.getHeight() << ')';

	return stream;
}


#endif /* BOX_H_ */
