/*
 * Elipse.h
 *
 *  Created on: 6 jul. 2022
 *      Author: Lorenzo
 */

#ifndef ELIPSE_H_
#define ELIPSE_H_


class Elipse{

private:
	double radio_mayor;
	double radio_menor;

public:
	Elipse() = default;
	Elipse(double pradio_mayor, double pradio_menor);

	// Estos mutadores solo se implementan
	// de esta manera para ejemplificar la
	// devolución del puntero this y el
	// encadenamiento de llamadas.
	Elipse *setRadioMayor(double pradio_mayor);
	Elipse *setRadioMenor(double pradio_menor);

	/*
	void setRadioMayor(double pradio_mayor);
	void setRadioMenor(double pradio_menor);
	*/

	double getRadioMayor() const;
	double getRadioMenor() const;


	~Elipse();	// Destructor Elipse.

	// Si el cuerpo del destructor no implementa
	// funcionalidades (cuerpo vacio), la forma recomendada
	// es indicarle al compialdor que cree un destructor
	// por defecto a través de la palabra clave default.
	// ~Elipse() = default;

};


#endif /* ELIPSE_H_ */
