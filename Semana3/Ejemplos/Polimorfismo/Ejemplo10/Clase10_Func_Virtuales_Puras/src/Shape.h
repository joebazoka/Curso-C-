/*
 * Shape.h
 *
 *  Created on: 9 may. 2022
 *      Author: Jose
 */

#ifndef SHAPE_H_
#define SHAPE_H_


// Clase base genérica para figuras
class Shape
{
protected:
	Point position; // Posicion de una figura
	Shape(const Point& shapePosition) : position {shapePosition} {}

public:
	virtual ~Shape() = default; // Recuerde: siempre utilice destructores virtuales para las clases base
	virtual double area() const = 0; // Funcion virtual pura para calcular el aera de una figura.
	virtual void scale(double factor) = 0; // Función virtual pura para escalar una figura

	// Función virtual regular para mover una figura
	virtual void move(const Point& newPosition) { position = newPosition; };
};

#endif /* SHAPE_H_ */
