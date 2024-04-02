#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Producto {
private:
    string nombre;
    double precio;

public:
    Producto(string name = "Papa", double price = 2.5){
        nombre = name;
        precio = price;
    }

    string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }
};

class Tienda {
private:
    string nombre;
    vector<Producto> productosDisponibles;

public:
    Tienda(string name = "Don Pepe"){
        nombre = name;
    }

    void agregarProducto(Producto producto) {
        productosDisponibles.push_back(producto);
        cout << "Producto '" << producto.getNombre() << "' agregado a la tienda: " << nombre << endl;
    }

    void mostrarProductos() {
        cout << "\nProductos disponibles en " << nombre << endl;
        for (int i = 0; i < productosDisponibles.size(); ++i) {
            cout << "    - " << productosDisponibles[i].getNombre() << endl;
            cout << "    - Precio: " << productosDisponibles[i].getPrecio() << endl;
        }
    }
};

class Cliente {
private:
    string nombre;
    vector<Producto> listaProductos;
    vector<int> listaCantidades;

public:
    Cliente(string name = "Yhosfer"){
        nombre = name;
    }

    void agregarProducto(Producto producto, int cantidad) {
        listaProductos.push_back(producto);
        listaCantidades.push_back(cantidad);
        cout << "Producto '" << producto.getNombre() << "' añadido al carrito de " << nombre << "." << endl;
    }

    void mostrarProductos() {
        cout << "\nProductos en carrito" << endl;
        for (int i = 0; i < listaProductos.size(); ++i) {
            cout << "    - " << listaProductos[i].getNombre() << endl;
            cout << "    - Precio: " << listaProductos[i].getPrecio() << endl;
            cout << "    - Cantidad: " << listaCantidades[i] << endl;
        }
    }

    double calcularCostoTotal() {
        double costoTotal = 0;
        for (int i = 0; i < listaProductos.size(); ++i) {
            costoTotal += listaProductos[i].getPrecio() * listaCantidades[i];
        }
        return costoTotal;
    }
};

int ejecucion() {
    // Crear productos
    Producto producto1("Televisor", 1200);
    Producto producto2("Lavadora", 1500);

    // Crear cliente
    Cliente cliente1("Yhosfer");
    cliente1.agregarProducto(producto1, 2);
    cliente1.agregarProducto(producto2, 1);
    cliente1.mostrarProductos();

    double costoTotal = cliente1.calcularCostoTotal();
    cout << "Costo total de la compra : " << costoTotal << "." << endl;

    return 0;
}