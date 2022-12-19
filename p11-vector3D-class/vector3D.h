/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Definition
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <cmath>

/** @brief Class Vector3D */
class Vector3D {
 private:
  double x_position;
  double y_position;
  double z_position;
 public:
  Vector3D(double x , double y , double z){
    this->x_position = x;
    this->y_position = y;
    this->z_position = z;
  }
  double MultiplyVector(const double escalar){
    double result;
    result = (escalar * x_position + escalar * y_position + escalar * z_position);
    return result;
  }
  double Module(){
    double modulo = sqrt(pow(x_position,2) + pow(y_position,2) + pow(z_position,2));
    return modulo;
  }
  Vector3D operator+(const Vector3D& vector) const;
  Vector3D operator*(const Vector3D& vector) const;
  friend std::ostream& operator<<(std::ostream& os, const Vector3D& vector);
  friend std::istream& operator>>(std::istream& is, Vector3D& vector);
};


#endif
