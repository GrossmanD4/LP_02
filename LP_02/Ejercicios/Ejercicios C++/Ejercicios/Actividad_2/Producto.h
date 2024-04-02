#ifndef EJERCICIOS_PRODUCTO_H
#define EJERCICIOS_PRODUCTO_H

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


class Producto{
private:

    string nombre;
    double precio;
    int cantidad;

public:
    Producto(string ="Hola", double=0, int=1);

    void mostrarProducto();

    string getNombre();
    void setNombre(string);
    double getPrecio();
    void setPrecio(double);
    int getCantidad();
    void setCantidad(int);
    void restarCantidad(int = 1);
};

Producto::Producto(string nombre , double precio, int cantidad)
{
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
}

void Producto::mostrarProducto()
{
    cout << setiosflags(ios::left)
         << setw(20) << nombre
         << setw(20) << precio
         << setw(20) << cantidad << endl;
}

void Producto :: setNombre(string Nombre){
    this -> nombre = Nombre;
}

string Producto ::getNombre() {
    return nombre;
}

void Producto :: setPrecio(double Precio){
    this -> precio = Precio;
}

double Producto ::getPrecio() {
    return precio;
}

void Producto :: setCantidad(int Cantidad){
    this -> cantidad = Cantidad;
}

int Producto ::getCantidad() {
    return cantidad;
}

void Producto::restarCantidad(int cantidad)
{
    this->cantidad-=cantidad;
}

#endif
