#include <iostream>

using namespace std;

class Coche{
public:
    string modelo;
    int año;
    int velocidad;

//Constructor
    Coche(string model = "Toyota",int year = 2015,int vel= 0){
        modelo = model;
        año = year;
        velocidad = vel;
    }

    void acelerar( int aumento ){
        velocidad += aumento;
        cout << "Su velocidad actual es de "<< velocidad << endl;
    }

    void frenar( int reduccion ){
        if (velocidad - reduccion <= 0){
            velocidad = 0;
            cout << "Su velocidad es actualmente de 0." << endl;
        } else {
            velocidad -= reduccion;
            cout << "Su velocidad actual es de "<< velocidad << endl;
        }
    }

    void aviso (){
        if (velocidad > 120){
            cout << "Reduzca su velocidad por favor, actualmente cuenta con "<< velocidad << endl;
        }
    }

    };




int ejecucion(){
    string modelo;
    int año;


    cout << "Ingrese el modelo de su auto:" << endl;
    cin >> modelo;
    cout << "El año del mismo:" << endl;
    cin >> año;
    if (año < 2000){
        cout << "Su auto es muy antiguo, salga inmediatamente del mismo. " << endl;
        return 0;
    }

    Coche Cochecito (modelo,año);

    int ejecutor = 1;
    int resp;

    while(ejecutor == 1){
        cout << "Acciones de su auto:" << endl;
        cout << "Acelerar --- 1" << endl;
        cout << "Frenar ----- 2" << endl;
        cin >> resp;
        while (resp != 1 and resp != 2){
            cout << "Ingrese una acción valida:" << endl;
            cin >> resp;
        }
        if (resp == 1){
            cout << "Usted esta acelerando 20km/h";
            Cochecito.acelerar(20);
        } else{
            cout << "Usted esta reduciendo su velocidad en 20km/h";
            Cochecito.frenar(20);
        }
        Cochecito.aviso();
        cout << "Desea continuar? (1:si , 2:no)" << endl;
        cin >> ejecutor;
    }

    return 0;
}


