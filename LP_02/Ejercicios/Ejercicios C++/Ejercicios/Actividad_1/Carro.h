#ifndef EJERCICIOS_CARRO_H
#define EJERCICIOS_CARRO_H

#include <iostream>

using namespace std;

class Carro{

private:

    // Atributos
    string nombre;
    double velocidad;


public:

    // Constructor
    Carro(string = "Anonymous", double = 0);


    // Metodos
    double avanzar(double = 0.0);

    // Getter y Setter
    string getNombre();
    void setNombre(string);

    double getVelocidad();
    void setVelocidad(double);

};

string Carro::getNombre()
{
    return nombre;
}

void Carro::setNombre(string nombre)
{
    this->nombre = nombre;
}

double Carro::getVelocidad()
{
    return velocidad;
}

void Carro::setVelocidad(double velocidad)
{
    this->velocidad = velocidad;
}


//Los dos puntos referencian a la clase
Carro::Carro(string nombre, double velocidad)
{
    this -> nombre = nombre;
    this -> velocidad = velocidad;
}


double Carro::avanzar(double  tiempo)
{
    return velocidad*tiempo;
}


#endif //EJERCICIOS_CARRO_H
