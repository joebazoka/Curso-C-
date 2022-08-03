//============================================================================
// Name        : Ejercicio_Ruleta.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Solución Ejercicio Ruleta (semana 1).
//============================================================================

#include <iostream>
#include <iomanip>
#include <chrono>
#include <random>

using namespace std;

unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine generador (seed);
uniform_int_distribution<unsigned int> distribucion(0,36);


const unsigned int numeros_ruleta[] {
									0, 32, 15, 19, 4, 21 , 2 , 25 , 17, 34 , 6, 27 , 13,
									36 , 11 , 30 , 8 , 23 , 10 , 5 , 24 , 16 , 33 , 1 ,
									20 , 14 , 31 , 9 , 22 , 18 , 29 , 7 , 28 , 12 , 35 ,
									3 , 26
									};

enum class Color_Ruleta		{ROJO, NEGRO, VERDE};
enum class Opcion_Apuesta	{COLOR, IMPAR_PAR, PLENO};


unsigned int lanzar_ruleta()    // llamamos a esta función para generar random.
{

    return distribucion(generador);

}

unsigned int resultado_color(unsigned int pos_ruleta)
{
	Color_Ruleta color;

	if(pos_ruleta){
		color = pos_ruleta % 2 ? Color_Ruleta::ROJO : Color_Ruleta::NEGRO;
	}else{
		color = Color_Ruleta::VERDE;
	}

	return (static_cast<unsigned int>(color));
}

unsigned int resultado_numero(unsigned int pos_ruleta)
{
	return(numeros_ruleta[pos_ruleta]);
}


int main() {

	unsigned int monto_apuesta {};
	unsigned int opcion_apuesta{};
	unsigned int multiplicador {};

	cout << "Cuanto dinero desea apostar? ";
	cin >> monto_apuesta;

	do{
		cout << "Opciones de apuesta" << "\n\n";

		cout << "0- Color\n1- Par-Impar\n2- Pleno" << endl;

		cin >> opcion_apuesta;

		if(opcion_apuesta > 3) cout << "Opcion erronea!!." << endl;

	}while(opcion_apuesta > 3);


	unsigned int color_apuesta, par_impar_apuesta, pleno_apuesta;
	{
		bool isValid {};

		unsigned int pos_ruleta {lanzar_ruleta()};
		unsigned int color_obtenido {resultado_color(pos_ruleta)};
		unsigned int valor_obtenido {resultado_numero(pos_ruleta)};

		do{
			switch(opcion_apuesta)
			{
				case static_cast<unsigned int>(Opcion_Apuesta::COLOR):

					cout << "Color a apostar (0: Rojo, 1: Negro): ";
					cin >> color_apuesta;
					cout << endl;

					if(color_apuesta > 1)
					{
						cout << "Opcion erronea!!" << endl;

					}else
					{
						isValid = true;
						if(color_obtenido == color_apuesta) multiplicador = 2;

					}
					break;

				case static_cast<unsigned int>(Opcion_Apuesta::IMPAR_PAR):
					cout << "Seleccione (0: Par, 1: Impar): ";
					cin >> par_impar_apuesta;
					cout << endl;

					if(par_impar_apuesta > 1)
					{
						cout << "Opcion erronea!!" << endl;

					}else
					{
						isValid = true;
						if((valor_obtenido % 2) == par_impar_apuesta) multiplicador = 2;

					}

					break;

				case static_cast<unsigned int>(Opcion_Apuesta::PLENO):
					cout << "Ingrese número a apostar (0 a 36): ";
					cin >> pleno_apuesta;
					cout << endl;

					if(pleno_apuesta > 36)
					{
						cout << "Error!. El valor debe estar ente 0 a 36." << endl;
					}
					else
					{
						isValid = true;
						if(valor_obtenido == pleno_apuesta) multiplicador = 35;
					}

					break;
			}
		}while(!isValid);

		cout << "Resultado: " << valor_obtenido << (!color_obtenido ? " ROJO" : " NEGRO");
		cout << endl;
	}

	cout << endl;

	if(multiplicador)
		cout << "Felicidades usted ha ganado!!: " << (multiplicador * monto_apuesta) << endl;
	else
		cout << "Usted ha perdido" << endl;

	return 0;
}



