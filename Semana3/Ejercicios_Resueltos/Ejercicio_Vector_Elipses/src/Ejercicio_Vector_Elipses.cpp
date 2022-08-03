//============================================================================
// Name        : Ejercicio_Elipse.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejercicio_Elipse.
//============================================================================

#include <iostream>
#include <vector>
#include "Elipse.h"

using namespace std;


void getRadiosFromUser(double& radio_menor, double& radio_mayor)
{
static unsigned int elipse_count{1};

	cout << "Indica el radio menor de elipse " << elipse_count << endl;
	cin >> radio_menor;

	cout << "Indica el radio mayor de elipse " << elipse_count << endl;
	cin >> radio_mayor;

	elipse_count++;
}


int main() {

	double radio_menor,radio_mayor;

	getRadiosFromUser(radio_menor, radio_mayor);
	Elipse elipse1 {radio_menor, radio_mayor};

	getRadiosFromUser(radio_menor, radio_mayor);
	Elipse elipse2 {radio_menor, radio_mayor};

	getRadiosFromUser(radio_menor, radio_mayor);
	Elipse elipse3 {radio_menor, radio_mayor};

	vector<Elipse> contenedor_elipses;

	contenedor_elipses.push_back(elipse1);
	contenedor_elipses.push_back(elipse2);	// <-
	contenedor_elipses.push_back(elipse3);

	cout << "Superficie: " << contenedor_elipses.at(1).superficie() << endl;

	return 0;
}
