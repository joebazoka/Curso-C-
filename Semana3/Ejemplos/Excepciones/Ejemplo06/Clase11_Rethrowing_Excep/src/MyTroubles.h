/*
 * MyTroubles.h
 *
 *  Created on: 10 may. 2022
 *      Author: Jose
 */

// Ejemplo04 - MyTroubles.h Clases excepción
#ifndef MYTROUBLES_H
#define MYTROUBLES_H
#include <string>
#include <string_view>

class Trouble
{
private:
	std::string message;
public:
	Trouble(std::string_view str = "Hay un problema") : message {str} {}
	virtual ~Trouble() = default; // Las clases Base deben tener siempre un destructor virtual!
	virtual std::string_view what() const { return message; }
};

// Clase de excepción derivada
class MoreTrouble : public Trouble
{
public:
	MoreTrouble(std::string_view str = "Hay mas problemas...") : Trouble {str} {}
};

// Clase de excepción derivada
class BigTrouble : public MoreTrouble
{
public:
	BigTrouble(std::string_view str = "Realmente un gran problema...") : MoreTrouble {str} {}
};

#endif
