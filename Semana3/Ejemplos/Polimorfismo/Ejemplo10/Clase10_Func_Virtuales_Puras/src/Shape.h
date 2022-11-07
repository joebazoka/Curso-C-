/*
 * Shape.h
 *
 *  Created on: 9 may. 2022
 *      Author: Jose
 */

#ifndef SHAPE_H_
#define SHAPE_H_


// Clase base gen�rica para figuras
class Shape
{
protected:
	Point position; // Posicion de una figura
	Shape(const Point& shapePosition) : position {shapePosition} {}

public:
	virtual ~Shape() = default; // Recuerde: siempre utilice destructores virtuales para las clases base
	virtual double area() const = 0; // Funcion virtual pura para calcular el aera de una figura.
	virtual void scale(double factor) = 0; // Funci�n virtual pura para escalar una figura

	// Funci�n virtual regular para mover una figura
	virtual void move(const Point& newPosition) { position = newPosition; };
};

#endif /* SHAPE_H_ */
