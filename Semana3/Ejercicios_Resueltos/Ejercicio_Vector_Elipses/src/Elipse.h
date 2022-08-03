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
	double radio_menor;
	double radio_mayor;

public:
	Elipse() = default;
	Elipse(double radio_menor, double radio_mayor);


	double getRadioMayor() const;
	void setRadioMayor(double radioMayor);

	double getRadioMenor() const;
	void setRadioMenor(double radio_menor);

	double superficie() const;
};


#endif /* ELIPSE_H_ */
