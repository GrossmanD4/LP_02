#include "Inventario.h"
using namespace std;


int main ()
{
    Inventario amazon;
    string opc;

    vector<Producto> productoSolicitados;
    vector<Producto> listaProductos {
            Producto("Coca Cola", 2.5, 15),
            Producto("Pepsi", 3.5, 1),
            Producto("Sprite", 2.5, 10),
    };

    amazon.agregarProductos(listaProductos);

    while (true) {

        amazon.mostrarProductos();
        cout << "Ingrese un producto a adquirir (o 'salir' para terminar):" << endl;
        getline(cin, opc);

        if (opc == "salir") {
            break;
        }

        try {
            productoSolicitados.push_back(amazon.pedidoProducto(opc));

        } catch (runtime_error &e) {
            cout << e.what() << endl;
        }
    }

    amazon.facturaCliente(productoSolicitados);

    return 0;
}