#include<iostream>

using namespace std;
//Creamos la funcion para saber si un año es viciesto
    bool EsBisiesto (int n) {
        if (n%100==0) {
            if (n%400==0) return 1;
            else return 0;
        }else if (n%4==0) return 1;
        else return 0;
    }
    
class Fecha{
    public:
        //Constructor fecha
        Fecha(int dia, int mes, int year) : dia_(dia), mes_(mes), year_(year) {}
        //Creamos el metodo ValiDates
        bool ValiDates(){
            if (dia_ < 1 || dia_ > 31) return false;
            if (mes_ < 1 || mes_ > 12) return false;
            if (mes_==2) {
                if (dia_ > 29) return false;
                if (dia_ == 29 && !EsBisiesto(year_)) return false;
            }
        }
    private:
        int mes_;
        int dia_;
        int year_;
};

int main(){
    Fecha f1(1,12,2004);

    if (f1.ValiDates() == 0){
        cout << "No es valida" << endl;
    }else cout << "La fecha es valida" << endl;
}
