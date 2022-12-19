#include<iostream>
using namespace std;

class Cuenta{
    public:
    //Atributos de la clase cuenta
    string titular_de_la_cuenta_;
    int numero_de_la_cuenta_;
    double saldo_;
    public:
    //Constructor de la clase Cuenta.
    Cuenta(string titular_de_la_cuenta, int numero_de_la_cuenta, double saldo ){
        this-> titular_de_la_cuenta_ = titular_de_la_cuenta;
        this-> numero_de_la_cuenta_ = numero_de_la_cuenta;
        this-> saldo_ = saldo;
    }
    //Metodo para mostrar la informacion almacenada.
    void Show(){
        cout << "El titular de la cuenta es: " << titular_de_la_cuenta_ << endl;
        cout << "El numero de la cuenta es: " << numero_de_la_cuenta_ << endl;
        cout << "Saldo actual: " << saldo_ << endl;
    }
    //Metodo para ingresar dinero a la cuenta.
    double Ingreso(double numero){
        double total{0.0};
        total = saldo_ + numero;
        return total;
    }
    //Metodo para retirar dinero.
    double Retirar(double numero){
        double total{0.0};
        total = saldo_ - numero;
        if (total < 0.0){
            total = saldo_;
        }
        return total;
    }  
};
//Funcion principal.
int main(){
    Cuenta cuenta1("Manuel", 2131213, 1500);
    int n;
    double numero1;
    double numero2;
    string nombre;  
    //Menu de opciones.
    cout << "----------------Menu----------------" << endl;
    cout << "Pulse 1 para mostrar su informacion de la cuenta." << endl; 
    cout << "Pulse 2 para ingresar dinero." << endl;
    cout << "Pulse 3 para retirar dinero." << endl;
    cout << "Pulse 4 salir." << endl;
    cin >> n;
    if (n == 1){
        cout << "Ingrese su nombre" << endl;
        cin >> nombre;
        cuenta1.Show();
    }else if(n == 2){
        cout << "Ingrese su nombre" << endl;
        cin >> nombre;
        cout << "Inserte la cantidad a ingresar: " << endl;
        cin >> numero1;
        cout << cuenta1.Ingreso(numero1) << endl;

    }else if (n == 3){
        cout << "Ingrese su nombre" << endl;
        cin >> nombre;
        cout << "Inserte la cantidad a retirar: " << endl;
        cin >> numero2;
        if (numero2 > cuenta1.saldo_){
            cout << "No es posible retirar el dinero, pruebe con otra cantidad." << endl; 
        }else {
            cout << cuenta1.Retirar(numero2) << endl;
        }
    }else if (n == 4){
        cout << "Ha salido correctamente. :)" << endl;
    }else{
        cout << "El valor introducido no es correcto. Pruebe con un numero entre el 1 y el 4." << endl;
    }

    return 0;
}
