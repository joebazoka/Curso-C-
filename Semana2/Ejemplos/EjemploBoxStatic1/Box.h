/*
 * Box.h
 *
 *  Created on: 3 may. 2022
 *      Author: José
 */

#ifndef BOX_H_	// impide la inclusión recursiva
#define BOX_H_

#include <cstddef>

class Box
{
private:
	double length {1.0};
	double width {1.0};
	double height {1.0};
	static inline size_t objectCount {}; // Count of objects in existence

public:
	// Constructores
	Box(double lengthValue, double widthValue, double heightValue);
	Box(double aSide);
	Box(const Box& box);
	Box() = default;
	double volume() const; // Método para calcular el volume de una caja.
	static size_t getObjectCount() { return objectCount; }

	double getLength() const;
	double getWidth() const;
	double getHeight() const;

	void setLength(double lv);
	void setWidth(double wv);
	void setHeight(double hv);

	friend double surfaceArea(const Box& aBox);

	~Box();

};


#endif /* BOX_H_ */
