#include<iostream>
#include<cmath>

class Complejo {
public:
    Complejo(double real = 0, double imaginario = 0);
    //Construimos el metodo para sobrecargar los operadores de suma
    Complejo operator+(const Complejo& otro) const;
    //Construimos el metodo para sobrecargar los operadores de resta
    Complejo operator-(const Complejo& otro) const;
    //Operador de inserccion de flujo
    friend std::ostream& operator<<(std::ostream& os, const Complejo& c);
    //Operador de inserccion de flujo
    friend std::istream& operator>>(std::istream& is, Complejo& c);
    
//Atributos
private:
    double real_;
    double imaginario_;
};
//
Complejo Complejo::operator+(const Complejo& otro) const {
    return Complejo(real_ + otro.real_, imaginario_ + otro.imaginario_);
}

int main() {
    Complejo c1(1, 2); // Creamos un número complejo con parte real 1 y parte imaginaria 2
    Complejo c2(3, 4); // Creamos otro