#include <iostream>
#include <string>

using namespace std;

class Rueda {
private:
    int tamaño;

public:
    Rueda(int tam = 0){
        tamaño = tam;
    }
};

class Coche {
private:
    string marca;
    int año;
    int velocidad;
    Rueda rueda1;
    Rueda rueda2;
    Rueda rueda3;
    Rueda rueda4;

public:
    Coche(string mar = "Kia", int year = 2018, int vel = 0){
        marca = mar;
        año = year;
        velocidad = vel;
    }

    void acelerar() {
        cout << "El coche " << marca << " acelera a " << velocidad << " km" << endl;
    }

    void frenar() {
        cout << "El coche " << marca << " frena" << endl;
    }

    void cambiarRuedas(int tamaño) {
        rueda1 = Rueda(tamaño);
        rueda2 = Rueda(tamaño);
        rueda3 = Rueda(tamaño);
        rueda4 = Rueda(tamaño);
        cout << "Se cambiaron las ruedas" << endl;
        cout << "    Modelo: " << marca << endl;
        cout << "    Nuevo tamaño: " << tamaño << " pulgadas" << endl;
    }
};

int ejecucion() {
    Coche coche2("supra", 2001, 200);

    cout << "Cambio de ruedas" << endl;
    coche2.cambiarRuedas(17);

    return 0;
}
