#include <iostream>

using namespace std;

class Estudiante{
public:
    string nombre;
    int edad;
    int grado;
    int cant_eval;

//Constructor
    Estudiante(string name = "Carlos",int age = 10,int grade= 1,int eval = 0){
        nombre = name;
        edad = age;
        grado = grade;
        cant_eval = eval;
    }

    void evaluar( int cantidad ){
        cant_eval += cantidad;
        cout << "La cantidad de examenes a evaluar es de "<< cant_eval << endl;
    }

    void calificar( ){
        int cant = cant_eval;
        int temp = 0;
        int nota;
        while (cant_eval != 0){
            cout << "Ingrese la nota correspondiente a la evaluacion " << cant_eval << " :" << endl;
            cin >> nota;
            while (nota < 0){
                cout << "Dato incorrecto: " << endl;
                cin >> nota;
            }
            temp += nota;
            cant_eval -= 1;

    }
    cout << "Felicidades," << nombre <<  " su promedio es de " << temp/cant << endl;
}};




int ejecucion(){
    string nombre;
    int edad;
    int grado;
    int cant;


    cout << "Ingrese el nombre del estudiante:" << endl;
    cin >> nombre;
    cout << "Su edad:" << endl;
    cin >> edad;
    if (edad < 10){
        cout << "Dato incorrecto: " << endl;
        cin >> edad;
    }

    Estudiante Estudiantito (nombre,edad,grado);

    int ejecutor = 1;
    int resp;

    while(ejecutor == 1){
        cout << "Ingrese la cantidad de examenes correspondientes a evaluar:" << endl;
        cin >> cant;
        while (cant <= 0){
            cout << "Ingrese una cantidad valida:" << endl;
            cin >> cant;
        }
        Estudiantito.evaluar(cant);
        Estudiantito.calificar();
        cout << "Desea continuar? (1:si , 2:no)" << endl;
        cin >> ejecutor;
    };
    return 0;
}