#include <iostream>
#include <string>
using namespace std;

class Avion {
private:
    string modelo;
    int combustible;
    int consumo_combustible;

public:
    Avion(string modelo, int combustible, int consumo_combustible) {
        this->modelo = modelo;
        this->combustible = combustible;
        this->consumo_combustible = consumo_combustible;
    }

    bool capacidad_de_vuelo_combustible(int tiempo_de_vuelo) {
        int combustible_necesario = tiempo_de_vuelo * consumo_combustible;
        return combustible_necesario <= combustible;
    }

    string getModelo() {
        return modelo;
    }

    int getCombustible() {
        return combustible;
    }

    int getConsumoCombustible() {
        return consumo_combustible;
    }
};

class Mision {
private:
    string destino;
    int duracion;
    int tripulacion;

public:
    Mision(string destino, int duracion, int tripulacion) {
        this->destino = destino;
        this->duracion = duracion;
        this->tripulacion = tripulacion;
    }

    void planificar_mision(Avion avion) {
        cout << "Combustible mínimo requerido: " << (duracion * avion.getConsumoCombustible()) << endl;
        if (avion.capacidad_de_vuelo_combustible(duracion)) {
            cout << "Planificación de Misión exitosa" << endl;
            cout << "Cantidad de combustible en el tanque: " << avion.getCombustible() << endl;
        } else {
            cout << "Combustible insuficiente para el tiempo de vuelo en la misión" << endl;
        }
    }
};

int main() {
    Avion avion("Airbus 777", 2000, 500);
    Mision mision("Lima", 5, 100);
    mision.planificar_mision(avion);
    return 0;
}