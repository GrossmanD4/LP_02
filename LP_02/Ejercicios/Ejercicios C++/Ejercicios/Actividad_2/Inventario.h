#ifndef EJERCICIOS_INVENTARIO_H
#define EJERCICIOS_INVENTARIO_H

#include <algorithm>
#include "Producto.h"


using namespace std;

class Inventario{
private:
    vector<Producto> listaDisponible;
    vector<Producto> listaAgotado;

    void actualizarLista();
    void mostratListas(vector<Producto>);

public:
    Inventario(vector<Producto> ={}, vector<Producto> = {});

    void agregarProducto(Producto);
    void agregarProductos(vector<Producto>);
    Producto pedidoProducto(string);
    void facturaCliente(vector<Producto>);
    void mostrarProductos();

};


Inventario::Inventario(vector<Producto> ProductosDisponibles, vector<Producto> ProductosAgotados)
{
    this->listaDisponible = ProductosDisponibles;
    this->listaAgotado = ProductosAgotados;
};

void Inventario::agregarProducto(Producto P)
{
    listaDisponible.push_back(P);
}

void Inventario:: actualizarLista()
{

    vector<Producto> nuevaListaDisponible;

    for ( Producto& p : listaDisponible)
    {
        if (0 < p.getCantidad())
        {
            nuevaListaDisponible.push_back(p);
        } else {
            listaAgotado.push_back(p);
        }
    }
    listaDisponible = nuevaListaDisponible;
}



void Inventario::agregarProductos(vector<Producto> lista)
{
    actualizarLista();
    for(Producto producto :lista)
    {
        listaDisponible.push_back(producto);
    }
}


void Inventario::mostratListas(vector<Producto> listas)
{
    for (Producto producto:listas)
    {
        producto.mostrarProducto();
    }
}

Producto Inventario::pedidoProducto(string solicitud)
{


    for (Producto& producto : listaDisponible)
    {
        if (producto.getNombre() == solicitud)
        {
            producto.restarCantidad();
            return producto;
        }
    }
//    throw runtime_error("No se encontro el producto"); // Si el producto no se encuentra
}

void Inventario::mostrarProductos()
{
    actualizarLista();
    cout << "Productos Disponibles" << endl;
    mostratListas(listaDisponible);

}

void Inventario::facturaCliente(vector<Producto> solicitados)
{
    cout << "Productos solicitados" << endl;
    mostratListas(solicitados);
}

#endif //EJERCICIOS_INVENTARIO_H
