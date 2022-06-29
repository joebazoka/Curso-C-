//============================================================================
// Name        : IndiceMasaCorporal.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Calcula e imprime tabla bmi (indice masa corporal o imc)
//============================================================================


// Utilizando array<T,N> para crear una tabla IMC.
// IMC: Indice masa corporal
// IMC = peso/(altura*altura)
// Peso en kg, altura en cm.

#include <iostream>
#include <iomanip>
#include <array>                            // Para array<T,N>

int main()
{
  const unsigned min_wt {40};              // Minimo peso en tabla (kg)
  const unsigned max_wt {120};             // Maximo peso en tabla
  const unsigned wt_step {5};				 // Pasos de 5kg.
  const size_t wt_count {(max_wt - min_wt) / wt_step};

  const unsigned min_ht {150};               // Minima altura en tabla (cm)
  const unsigned max_ht {205};               // Maxima altura en tabla.
  const unsigned ht_step {5};
  const size_t ht_count { 1 + (max_ht - min_ht) / ht_step };

  std::array<unsigned, wt_count> weight_kg {};
  std::array<unsigned, ht_count> height_mt {};

  // Carga array de pesos desde min_wt a max_wt con pasos wt_step.
  for (unsigned i{}, w{ min_wt }; i < wt_count; w += wt_step, ++i)
  {
    weight_kg[i] = w;
  }

  // Carga array de alturas desde min_ht a max_ht con pasos ht_step.
  for (unsigned i {}, h{ min_ht }; h <= max_ht; h += ht_step)
  {
    height_mt.at(i++) = h;
  }

  std::cout << "\n\n";

  // Imprime linea por encima del encabezado
  std::string linea((9 * (wt_count - 1)), '-');
  std::cout << linea << std::endl;


  // Imprimir encabezado tabla.
  std::cout << std::setw(7) << " |";
  for (auto w : weight_kg)
    std::cout << std::setw(5) << w << "  |";
  std::cout << std::endl;

  // Imprime linea debajo del encabezado
  std::cout << linea << std::endl;

  double bmi {};                                 // almacena imc

  for (auto h : height_mt)
  {
    std::cout << std::setw(3) << std::fixed<< std::setprecision(1) << h  << " cm"<< "|";

    for (auto w : weight_kg)
    {
      bmi = static_cast<double>(h) / 100.0;
      bmi = w / (bmi*bmi);


      std::cout << std::setw(6) << bmi << " |";

    }
    std::cout << std::endl;
  }
  // Imprimir linea debajo de tabla.
  std::cout << linea << std::endl;

  std::cout << "\nIMC de 18.5 a 24.9 es normal" << std::endl;
}
