#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Producto {
private:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto(string name = "Cloro", double price = 2.5, int cant = 2){
        nombre = name;
        precio = price;
        cantidad = cant;
    }

    void establecerPrecio(double price) {
        precio = price;
    }

    void establecerCantidad(int cant) {
        cantidad = cant;
    }

    string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }

    int getCantidad() {
        return cantidad;
    }
};

class Factura {
private:
    string cliente;
    vector<Producto> productos;

public:
    Factura(string client = "Juan"){
        cliente = client;
    }

    void agregarProducto(Producto producto) {
        productos.push_back(producto);
        cout << "Producto " << producto.getNombre() << " agregado a la factura" << endl;
    }

    void imprimirFactura() {
        double totalFactura = 0;
        double totalProducto = 0;
        cout << "Factura a nombre de '" << cliente << "'" << endl;
        cout << "    Productos:" << endl;
        for (int i = 0; i < productos.size(); ++i) {
            totalProducto = productos[i].getPrecio() * productos[i].getCantidad();
            totalFactura += totalProducto;
            cout << "    - Nombre: " << productos[i].getCantidad() << " " << productos[i].getNombre() << " - Precio: " << productos[i].getPrecio() * productos[i].getCantidad() << endl;
        }
        cout << "Total de la factura: " << totalFactura << endl;
    }
};

int ejecucion() {
    Producto producto1("Televisor", 1200, 1);
    Producto producto2("Radio", 75, 3);

    Factura factura1("Yhosfer");
    factura1.agregarProducto(producto1);
    factura1.agregarProducto(producto2);
    factura1.imprimirFactura();

    return 0;
}