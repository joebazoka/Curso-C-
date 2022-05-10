/*
 * ToughPack.h
 *
 *  Created on: 9 may. 2022
 *      Author: Lorenzo
 */

#ifndef TOUGHPACK_H_
#define TOUGHPACK_H_

#include "Box.h"

class ToughPack : public Box
{
public:
	// Constructor
	ToughPack(double lv, double wv, double hv) : Box {lv, wv, hv} {}

protected:	// Cambiamos la especificación de acceso de ToughPack
	// Método para calcular el volumen de un ToughPack dejando 15% para empaques
	double volume() const override { return 0.85 * length * width * height; }
};




#endif /* TOUGHPACK_H_ */
