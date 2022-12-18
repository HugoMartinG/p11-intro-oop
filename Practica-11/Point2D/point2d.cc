#include <iostream>
#include <cmath>

class Point2D {
 public:
  // Constructor para inicializar las coordenadas del punto
  Point2D(double x, double y) : x_(x), y_(y) {}

  // Método para mostrar las coordenadas del punto
  void Show() const {
    std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
  }

  // Método para cambiar las coordenadas del punto
  void Move(double x, double y) {
    x_ = x;
    y_ = y;
  }

  // Método para calcular la distancia entre dos puntos
  static double Distance(const Point2D &p1, const Point2D &p2) {
    return std::sqrt(std::pow(p1.x_ - p2.x_, 2) + std::pow(p1.y_ - p2.y_, 2));
  }

  // Método para calcular el punto medio del segmento que une dos puntos
  static Point2D Middle(const Point2D &p1, const Point2D &p2) {
    return Point2D((p1.x_ + p2.x_) / 2, (p1.y_ + p2.y_) / 2);
  }

 private:
  double x_;
  double y_;
};
int main() {
  Point2D p1(1.0, 2.0);  // Crea un punto con coordenadas (1, 2)
  Point2D p2(3.0, 4.0);  // Crea otro punto con coordenadas (3, 4)

  p1.Show();  // Muestra las coordenadas del punto p1
  p2.Show();  // Muestra las coordenadas del punto p2

  p1.Move(5.0, 6.0);  // Cambia las coordenadas de p1 a (5, 6)
  p1.Show();  // Muestra las nuevas coordenadas de p1

  double distance = Point2D::Distance(p1, p2);  // Calcula la distancia entre p1 y p2
  std::cout << "Distance: " << distance << std::endl;

  Point2D middle = Point2D::Middle(p1, p2);  // Calcula el punto medio del segmento que une p1 y p2
  std::cout << "Middle: ";
  middle.Show();  // Muestra las coordenadas del punto medio

  return 0;
}