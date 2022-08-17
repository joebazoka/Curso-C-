/*
 * Circulo.h
 *
 *  Created on: 5 jul. 2022
 *      Author: Jose
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

class Circulo{

private:
	double radio;

public:
	Circulo() = default;		// Constructor por defecto.
	Circulo(double pRadio);
	Circulo(const Circulo&);	// prototipo de constructor de copia.

	// implementar accesores o getters
	
	
	double perimetro() const;
	double superficie() const;

	double getRadio();

	void setRadio(double pradio);
};

#endif /* CIRCULO_H_ */
