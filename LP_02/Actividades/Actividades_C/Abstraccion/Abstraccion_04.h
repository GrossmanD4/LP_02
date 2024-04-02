#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Tienda {
private:
    string nombre;
    string direccion;
    string tipo;
    vector<string> productos;

public:
    Tienda(string name = "Tienda_pepe", string direction = "Av.Lima 123", string tipe = "Comercial"){
        nombre = name;
        direccion = direction;
        tipo = tipe;
    }


    void agregarProducto(string producto) {
        productos.push_back(producto);
    }

    void venderProducto(string producto) {
        bool ejecutor = false;
        for (int i = 0; i < productos.size(); ++i) {
            if (productos[i] == producto) {
                //Productos.begin lo que hace en si es llevar el puntero en el que nos encontramos al primer elemento y al sumarle i, se borra el elemento que adquirimos con el .erase
                productos.erase(productos.begin() + i);
                cout << "Producto vendido: " << producto << endl;
                ejecutor = true;
                break;
            }
        }
        if (ejecutor == false) {
            cout << "Producto no encontrado en la tienda." << endl;
        }
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Productos: ";
        for (int i = 0; i < productos.size(); ++i) {
            cout << productos[i] << ", ";
        }
        cout << endl;
    }
};

int ejecucion() {
    string nombre;
    string Direccion;
    string Tipo;
    string articulo;


    cout << "Ingrese el nombre de su tienda:" << endl;
    cin >> nombre;
    cout << "Su direccion:" << endl;
    cin >> Direccion;
    cout << "Su tipo:" << endl;
    cin >> Tipo;

    Tienda Tiendita(nombre, Direccion, Tipo);

    int ejecutor = 1;
    int resp;

    while (ejecutor == 1) {
        cout << "Acciones de su tienda:" << endl;
        cout << "Agregar Producto --- 1" << endl;
        cout << "Vender Producto ---- 2" << endl;
        cin >> resp;
        while (resp != 1 and resp != 2) {
            cout << "Ingrese una acción valida:" << endl;
            cin >> resp;
        }
        if (resp == 1) {
            cout << "Ingrese un elemento:";
            cin >> articulo;
            Tiendita.agregarProducto(articulo);
        } else {
            cout << "Ingrese el producto a comprar:";
            cin >> articulo;
            Tiendita.venderProducto(articulo);
        }
        Tiendita.mostrarInformacion();
        cout << "Desea continuar? (1:si , 2:no)" << endl;
        cin >> ejecutor;
    }

    return 0;
}
