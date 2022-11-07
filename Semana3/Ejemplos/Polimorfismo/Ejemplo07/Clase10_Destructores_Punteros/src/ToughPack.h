/*
 * ToughPack.h
 *
 *  Created on: 9 may. 2022
 *      Author: Jose
 */

#ifndef TOUGHPACK_H_
#define TOUGHPACK_H_

#include "Box.h"

class ToughPack : public Box
{
public:
	// Constructor
	ToughPack(double lv, double wv, double hv) : Box {lv, wv, hv} {}

	~ToughPack() { std::cout << "Destructor de ToughPack llamado" << std::endl; }

protected:	// Cambiamos la especificaci�n de acceso de ToughPack
	// M�todo para calcular el volumen de un ToughPack dejando 15% para empaques
	double volume() const override { return 0.85 * length * width * height; }



};




#endif /* TOUGHPACK_H_ */
