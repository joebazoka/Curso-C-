//============================================================================
// Name        : Ejercicio_Inversion.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum class Bonos:unsigned int{ Bonos_A, Bonos_B, Bonos_C, Bonos_D};

// Tambien podemos realizar el ejercicio utilizando constantes en lugar de enum class.
const unsigned char BONO_A	{};
const unsigned char BONO_B	{BONO_A+1};
const unsigned char BONO_C	{BONO_A+2};
const unsigned char BONO_D	{BONO_A+3};



int main() {

	unsigned int tipo_inversion;

	cout << "¿En que tipo de bonos desea invertir?: ";
	cin >> tipo_inversion;
	cout << endl;

	double interes {};

	unsigned int monto_inversion;
	cout << "Ingrese monto a invertir: ";
	cin >>  monto_inversion;
	cout << endl;

	switch(tipo_inversion)
	{
		case static_cast<unsigned int>(Bonos::Bonos_A)/*BONO_A*/:

			if(monto_inversion > 150000)
			{
				interes = 5.0;
			}else{
				cout << "El monto ingresado: " << monto_inversion << " no permite invertir en bonos tipo A" << endl;
			}
			break;

		case static_cast<unsigned int>(Bonos::Bonos_B)/*BONO_B*/:
			if((monto_inversion > 100000) && (monto_inversion <= 150000))
			{
				interes = 4.3;
			}else{
				cout << "El monto ingresado: " << monto_inversion << " no permite invertir en bonos tipo B" << endl;
			}
			break;

		case static_cast<unsigned int>(Bonos::Bonos_C)/*BONO_C*/:
				if(monto_inversion >= 80000 && monto_inversion <= 100000)
				{
					interes = 3.0;
				}else{
					cout << "El monto ingresado: " << monto_inversion << " no permite invertir en bonos tipo C" << endl;
				}
			break;

		case static_cast<unsigned int>(Bonos::Bonos_D)/*BONO_D*/:
				if(monto_inversion < 80000)
				{
					interes = 2.7;
				}else{
					cout << "El monto ingresado: " << monto_inversion << " no permite invertir en bonos tipo D" << endl;
				}
			break;
	}

	if(interes)
	{
		cout << "El monto final + ganancias sera: " << (monto_inversion * (1 + interes / 100)) << endl;
	}

	return 0;
}


