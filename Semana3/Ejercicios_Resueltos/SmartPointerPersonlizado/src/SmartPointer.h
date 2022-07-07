/*
 * SmartPointer.h
 *
 *  Created on: 7 jul. 2022
 *      Author: Jose
 */

#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

class SmartPointer{

private:
	double *ptr;

public:
	SmartPointer(double *mPtr);

	double *getPtr();

	~SmartPointer();

};



#endif /* SMARTPOINTER_H_ */
