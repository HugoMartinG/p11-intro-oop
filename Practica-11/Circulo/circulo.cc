#include<iostream>
#include<cmath>
using namespace std;
//Enumeracion para representar la clase color
enum Color{
    ROJO, 
    AZUL, 
    VERDE
};
//Creamos la clase Circulo
class Circulo {
    public:
    //Constructor para inicializar las caracteristicas del circulo
    Circulo(int x, int y, double radio, Color color ): x_(x), y_(y),radio_(radio), color_(color) {}

    //Metodo para el Area
    double Area() const {
        return (M_PI * radio_ * radio_);
    }
    //Metodo para el perimetro
    double Perimetro() const {  
        return (2 * M_PI * radio_);
    }
    //Metodo para mostrar las caracteristicas del circulo
    void Print() const {
        cout << "Centro: (" << x_ << ", " << y_ << ")" << endl;
        cout << "Radio: " << radio_ << endl;
        cout << "Color: " << color_ << endl;
    }
    //Método para determinar si un punto (x, y) está dentro del círculo
    bool EsInterior(int x, int y) const {
    int dx = x - x_;
    int dy = y - y_;
    return (dx * dx + dy * dy < radio_ * radio_);
    }
    private:
    int x_, y_;
    int radio_;
    Color color_;
};
int main () {
    Circulo c1(3, 3, 4,ROJO);
    c1.Print();
    cout << "El area del circulo es: " << c1.Area() << endl;
    cout << "El perimetro del circulo es: " << c1.Perimetro() << endl;
    cout << "EsInterior: " << c1.EsInterior(1,1) << endl;
}