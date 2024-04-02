#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    string genero;

public:
    Persona(string name = "Juan", int age = 11, string gender = "Masculino"){
        nombre = name;
        edad = age;
        genero = gender;
    }


    string getNombre() {
        return nombre;
    }

    void setNombre(string name) {
        nombre = name;
    }

    int getEdad() {
        return edad;
    }

    void setEdad(int age) {
        edad = age;
    }

    string getGenero() {
        return genero;
    }

    void setGenero(string gender) {
        genero = gender;
    }
};

int ejecucion() {
    Persona persona("Juan", 30, "Masculino");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Género: " << persona.getGenero() << endl;

    persona.setNombre("Marta");
    persona.setEdad(10);
    persona.setGenero("Femenino");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Género: " << persona.getGenero() << endl;

    return 0;
}
