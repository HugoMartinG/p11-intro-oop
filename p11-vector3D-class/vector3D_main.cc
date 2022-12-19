/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Client program to work with the vector3D class
 */

#include <iostream>

#include "vector3D.h"

int main() {
  Vector3D vector1(1.4,2.1,3.4);
  std::cout << "First vector: " << vector1;
  Vector3D vector2(1.0, 2.0, 3.0);
  std::cout << "Second vector: " << vector2;
  Vector3D sum_vector(0,0,0);
  sum_vector = vector1 + vector2;     
  std::cout << "Sum of the two vectors: " << sum_vector;
  Vector3D scalar_product(0,0,0); 
  scalar_product = vector1 * vector2;     
  std::cout << "Scalar product of both vectors: " << scalar_product << std::endl;
  double multiplied_vector;
  const double kMultiplier{4.0};
  multiplied_vector = vector1.MultiplyVector(kMultiplier);
  std::cout << "Multiplied Vector: " << multiplied_vector;
  double vector_module{vector1.Module()};
  std::cout << "Module of the first vector: " << vector_module << std::endl;
  return 0;
}

