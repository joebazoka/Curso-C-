//============================================================================
// Name        : Demo_shared_ptr.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Ejemplo de uso de shared_ptr. Calcula promedio de un conjunto de
//				 temperaturas ingresadas por teclado.
//============================================================================
#include <iostream>
#include <iomanip>
#include <memory> // Para usar smart pointers
#include <vector> // Para usar contenedor vector



using namespace std;


int main()
{

	// Creamos un vector<T> dinamicamente.
	auto registros_temp {make_shared<vector<double>>()};

	auto xc = registros_temp;


	cout << "Ingrese valores de temperatura separados por espacio."
				 << " Para finalizar ingrese valor mayor a 900" << endl;
	while(true)
	{
		double temp;		// Almacena temp. ingresada por teclado.

		cin >> temp;

		if(temp > 900.0) break;		// Si se ingresa temp > 900 se rompe ciclo.

		registros_temp->push_back(temp);	// Valores validos a vector.
	}

	double average_temp{};					// Almacena valor medio calculado.
	{
		double total{}, count{};			// Suma de las temp. y contador de datos ingresados.
		for(const auto& temp : *registros_temp)
		{
			total += temp;
			++count;
		}

		average_temp = total / count;		// Calculo promedio
	}

	cout << "Temperatura promedio: " << fixed << setprecision(2)<< average_temp
									<< endl << defaultfloat;

}



//std::shared_ptr<std::vector<double>> registros_temp; // Almacena datos temperatura.

	//shared_ptr registros_temp{make_shared<vector<double>>()};

	//shared_ptr<vector<double>> registros_temp {};

	//std::initializer_list<double> temp_list {1,2,3,4,5,6,7};
	//auto registros_temp {make_shared<vector<double>>(temp_list)};
	//auto ptr {make_unique<double[]>(20)};
