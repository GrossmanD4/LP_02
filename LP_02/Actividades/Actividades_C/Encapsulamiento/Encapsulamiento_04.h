#include <iostream>
#include <string>

using namespace std;

class Factura {
private:
    int numero;
    string fecha;
    double monto;

public:
    Factura(int num = 0, string date = "Sin fecha", double amount = 0.0) {
        numero = num;
        fecha = date;
        monto = amount;
    }

    int getNumero() {
        return numero;
    }

    void setNumero(int num) {
        numero = num;
    }

    string getFecha() {
        return fecha;
    }

    void setFecha(string date) {
        fecha = date;
    }

    double getMonto() {
        return monto;
    }

    void setMonto(double amount) {
        monto = amount;
    }
};

int ejecucion() {
    Factura factura_01(2912, "01/03/2005", 110.25);

    cout << "Número de factura: " << factura_01.getNumero() << endl;
    cout << "Fecha de emisión: " << factura_01.getFecha() << endl;
    cout << "Monto: " << factura_01.getMonto() << endl;

    factura_01.setNumero(2810);
    factura_01.setFecha("05/02/2000");
    factura_01.setMonto(2912);

    cout << "Número de factura: " << factura_01.getNumero() << endl;
    cout << "Fecha de emisión: " << factura_01.getFecha() << endl;
    cout << "Monto: " << factura_01.getMonto() << endl;

    return 0;
}
