/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Implementation
 */

#include <iostream>
#include <cmath>

#include "vector3D.h"

/**
 * @brief Displays the given vector.
 * @param[in] kOutput: The output that is shown to the user.
 * @param[in] vector: constant reference to the given vector.
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& vector) {
  output << '(' << vector.x_position << ", " << vector.y_position << ", " << vector.z_position << ")\n";
  return output;
}
Vector3D Vector3D :: operator+(const Vector3D& vector) const{
  //Vector3D suma(x_position + vector.x_position , y_position + vector.y_position , z_position + vector.z_position);
  double sumax = x_position + vector.x_position;
  double sumay = y_position + vector.y_position;
  double sumaz = z_position + vector.z_position;
  Vector3D suma(sumax,sumay,sumaz);
  return suma;
}
Vector3D Vector3D::operator*(const Vector3D& vector) const{
  double productx = x_position * vector.x_position;
  double producty = y_position * vector.y_position;
  double productz = z_position * vector.z_position;
  Vector3D product(productx,producty,productz);
  return product;
}