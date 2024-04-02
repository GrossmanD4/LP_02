#ifndef EJERCICIOS_CARRERA_H
#define EJERCICIOS_CARRERA_H

#include <iostream>
#include "Carro.h"

using namespace std;



class Carrera {

private:

    //Atributos
    double distanciaPista;
    Carro bot;
    void CreacionBot(double);

public:
    // Constructor
    Carrera(double = 100, int = 1);
    void inicioCarrera(Carro);
};

//Los dos puntos referencian a la clase
Carrera::Carrera(double largo, int nivelbot)
{
    this->distanciaPista=largo;
    CreacionBot((nivelbot*1.0));
}


void Carrera::CreacionBot(double dificultad)
{
    this->bot = Carro("pollo",dificultad);
}

void Carrera::inicioCarrera(Carro PJ)
{
    int tiempo = 0;
    bool momento = true;

    while(PJ.avanzar(tiempo) <= distanciaPista or bot.avanzar(tiempo) <= distanciaPista)
    {
        tiempo ++;

        if(PJ.avanzar(tiempo) > distanciaPista/2 and momento)
        {
            cout << "El jugador "<< PJ.getNombre()<<" esta a la mitad de la pista" << endl;
            momento = false;
        }

    }

    if (PJ.avanzar(tiempo)> bot.avanzar(tiempo))
    {
        cout << "El jugador " << PJ.getNombre() <<" ha ganado." << endl;
    }else{
        cout << "El bot " << bot.getNombre() << " ha ganado." << endl;
    }
}

#endif //EJERCICIOS_CARRERA_H
