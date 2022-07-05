//============================================================================
// Name        : EjercicioSobrecargaPlus.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


// Si descomentamos esta linea, se utilizan templates, de otra forma
// se utilizan sobrecargas.

//#define _SOBRECARGA

#ifdef _SOBRECARGA

string my_plus(string s1, string s2)
{
	return(s1 + s2);
}

int my_plus(int a, int b)
{
	return(a+b);
}

double my_plus(double d1, double d2)
{
	return(d1 + d2);
}

#else

template<typename T>
T my_plus(const T& arg1,const T& arg2)
{
	return(arg1 + arg2);
}

#endif

int main() {

	int n {my_plus(3, 4)};
	double d {my_plus(3.2, 4.2)};

	cout << n << endl;
	cout << d << endl;

	const string s1{"jjj"}, s2{"sssrs"};

	const string s3 {my_plus(s1, s2)};

	cout << s3 << endl;

	return 0;
}
