/*
 * Circle.h
 *
 *  Created on: 10 may. 2022
 *      Author: Lorenzo
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

// Macro que define PI
#define PI 3.141592653589793238462643383279502884

// Clase que define un circulo
class Circle : public Shape
{
protected:
	double radius; // Radio del circulo

public:
	Circle(const Point& center, double circleRadius) : Shape{center}, radius{circleRadius} {}
	double area() const override { return radius * radius * PI; }
	void scale(double factor) override { radius *= factor; }
};

#endif /* CIRCLE_H_ */
