#include <iostream>
#include <string>

using namespace std;

class CuentaBanco {
private:
    double saldo;
    string numeroCuenta;

public:
    CuentaBanco(double saldo_base = 0.0, string num = "1234") {
        saldo = saldo_base;
        numeroCuenta = num;
    }

    double getSaldo() {
        return saldo;
    }

    void setSaldo(double nuevoSaldo) {
        saldo = nuevoSaldo;
    }

    string getNumeroCuenta() {
        return numeroCuenta;
    }

    void setNumeroCuenta(string nuevoNumero) {
        numeroCuenta = nuevoNumero;
    }
};

int ejecucion() {
    CuentaBanco cuenta(1000.0, "72949694");

    cout << "Saldo : " << cuenta.getSaldo() << endl;
    cout << "Número de cuenta: " << cuenta.getNumeroCuenta() << endl;

    cuenta.setSaldo(1500.0);
    cuenta.setNumeroCuenta("987654321");

    cout << "Saldo: " << cuenta.getSaldo() << endl;
    cout << "Número de cuenta : " << cuenta.getNumeroCuenta() << endl;

    return 0;
}
