/*
 * MyTroubles.h
 *
 *  Created on: 10 may. 2022
 *      Author: Lorenzo
 */

// Definición de clase excepción
#ifndef MYTROUBLES_H_
#define MYTROUBLES_H_


#include <string>
#include <string_view>

class Trouble
{
private:
	std::string message;

public:
	Trouble(std::string_view str = "Hay un problema") : message {str} {}

	std::string_view what() const { return message; }

	Trouble(const Trouble& obj):message{obj.message}{}

	~Trouble(){std::cout << "Destructor Trouble" << std::endl;}

};

#endif /* MYTROUBLES_H_ */
