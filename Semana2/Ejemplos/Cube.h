/*
 * Cube.h
 *
 *  Created on: 4 may. 2022
 *      Author: Lorenzo
 */

#ifndef CUBE_H_
#define CUBE_H_

// Cube.h
class Cube
{
	private:
		double side;

	public:
		/*explicit*/ Cube(double aSide); // Constructor
		double volume(); // Calcula volumen de un cubo
		bool hasLargerVolumeThan(Cube aCube); //Compara el volumen de un cubo con otro
};

#endif /* CUBE_H_ */


