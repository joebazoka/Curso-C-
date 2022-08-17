/*
 * Array.h
 *
 *  Created on: 15 ago. 2022
 *      Author: Jose
 */

// Esta variante de la plantilla usa copy-and-swap para un operador de asignación
// de copia segura en memoria

#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdexcept>                        // para tipos standard exception
#include <string>                           // Para std::to_string()
#include <utility>                          // Para std::as_const()

template <typename T>
class Array
{
private:
  T* elements;                              // Array de tipo T
  size_t size;                              // Numero de elementos del array

public:
  explicit Array(size_t arraySize);         // Constructor
  Array(const Array& array);                // Constructor de copia
  ~Array();                                 // Destructor
  Array& operator=(Array rhsCopy);          // Operador de asignacion
  T& operator[](size_t index);              // Operador de subindice
  const T& operator[](size_t index) const;  // Operador de subindice para const arrays
  size_t getSize() const { return size; }   // Accessor para size
  void swap(Array& other) noexcept;         // Funcion miembro noexcept swap
};

// Constructor
template <typename T>                      // This is a template with parameter T
Array<T>::Array(size_t arraySize) : elements{ new T[arraySize] }, size{ arraySize }
{}

// Constructor de copia
template <typename T>
Array<T>::Array(const Array& array) : Array{array.size}
{
  for (size_t i {}; i < size; ++i)
    elements[i] = array.elements[i];
}

// Destructor
template <typename T>
Array<T>::~Array()
{
  delete[] elements;
}

// Operador de subindice
template <typename T>
const T& Array<T>::operator[](size_t index) const
{
  if (index >= size)
	  throw std::out_of_range {"Indice demasiado grande: " + std::to_string(index)};

  return elements[index];
}

// Operador de subindice no coonstante en terminos del operador constante
// Usa el idioma 'const-and-back-again'
template <typename T>
T& Array<T>::operator[](size_t index)
{
  return const_cast<T&>(std::as_const(*this)[index]);
}

// Operador de asignacion en terminos del constructor de copia
// Usa el idioma 'copy-and-swap'.
template <typename T>
Array<T>& Array<T>::operator=(Array rhsCopy)  // Copy...
{
  swap(rhsCopy);        // ... swap!  (noexcept)
  return *this;         // Retornar lhs
}

// Funcion miembro noexcept swap
template <typename T>
void Array<T>::swap(Array& other) noexcept
{
  std::swap(elements, other.elements);
  std::swap(size, other.size);
}

// Funcion onvencional no miembro noexcept swa
template <typename T>
void swap(Array<T>& one, Array<T>& other) noexcept
{
  one.swap(other);     // Reenviar a la función miembro publica
}



#endif /* ARRAY_H_ */
