//============================================================================
// Name        : EjercicioTemplateClamp.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>

template<typename T>
const T& my_clamp(const T& a, const T& b, const T& c);


template<typename T>
const T& my_clamp(const T& a, const T& b, const T& c)
{
	if(a < b) return b;
	else if(a < c) return a;
	else return c;
}

int main() {

	std::string a_string {"A"}, z_string {"Z"};
	std::string test_string{"Esta es una cadena de prueba"};
	std::cout << my_clamp(test_string, a_string, z_string) << std::endl;

	std::cout << "5.0 clampeado al rango [1.5, 2.5] es " << my_clamp(5.0, 1.5, 2.5) << std::endl;
	return 0;
}
