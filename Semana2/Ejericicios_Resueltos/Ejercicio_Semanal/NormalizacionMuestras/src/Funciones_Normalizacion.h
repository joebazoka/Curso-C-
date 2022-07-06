/*
 * Helper_Func.h
 *
 *  Created on: 4 jul. 2022
 *      Author: Jose
 */

#ifndef FUNCIONES_NORMALIZACION_H_
#define FUNCIONES_NORMALIZACION_H_

#include <memory>

const double *find_min(const double *samples, size_t size);
const double *find_max(const double *samples, size_t size);
void shift_samples(double *samples, double *normal, size_t size, double delta);
void scale_samples(double *samples, double *normal, size_t size, double denomin);
void normalize(double *samples, double *normalized_samples, size_t size);



#endif /* FUNCIONES_NORMALIZACION_H_ */
