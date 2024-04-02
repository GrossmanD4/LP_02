#include <iostream>
using namespace std;

class Animal{
public:
    string nombre;
    int edad;
    string tipo;
    int saciedad;

//Constructor
    Animal(string name = "Firulais",int age = 0,string type = "Felino",int sac = 0){
        nombre = name;
        edad = age;
        tipo = type;
        saciedad = sac;
    }

    int alimentar(){
        if (saciedad<3){
            saciedad += 1;
            cout << "Se alimento correctamente a su mascota"<< endl;
        } else {
            cout << "Su mascota esta llena" << endl;
        }
        return 0;
    }

    void sonido(){
        if (tipo == "Felino"){
            cout << "Miau" << endl;
        } else{
            if (tipo == "Canino"){
                cout << "Guau" << endl;
            } else{
                cout << "Waos" << endl;
            }
        }
    }
};


int ejecucion_1(){
    string nombre;
    int edad;
    string tipo;

    cout << "Ingrese el nombre de su mascota:" << endl;
    cin >> nombre;
    cout << "Su edad:" << endl;
    cin >> edad;
    cout << "Su tipo (Felino / Canino / otro):" << endl;
    cin >> tipo;
    while(tipo!="Felino" and tipo!="Canino" and tipo!="otro"){
        cout << "Dato invalido: " << endl;
        cin >> tipo;
    }

    Animal animalito (nombre,edad,tipo);

    int ejecutor = 1;
    int resp;

    while(ejecutor == 1){
        cout << "Acciones de su mascota:" << endl;
        cout << "Saludar --  1" << endl;
        cout << "Alimentar - 2" << endl;
        cin >> resp;
        while (resp != 1 and resp != 2){
            cout << "Ingrese una acción valida:" << endl;
            cin >> resp;
        }
        if (resp == 1){
            animalito.sonido();
        } else{
            animalito.alimentar();
        }
        cout << "Desea continuar? (1:si , 2:no)" << endl;
        cin >> ejecutor;
    }

    return 0;
}



