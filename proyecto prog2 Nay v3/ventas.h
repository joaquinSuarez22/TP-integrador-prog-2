#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED
#include <cstring>
#include "fecha.h"
#include <iostream>

using namespace std;

class Venta {
private:
    Fecha fecha;
    int dniCliente;
    int dniVendedor;

public:
    // Constructor
    Venta(const Fecha& f, int dCliente, int dVendedor)
        : fecha(f), dniCliente(dCliente), dniVendedor(dVendedor) {}

    // Métodos getter
    Fecha getFecha() const {
        return fecha;
    }

    int getDniCliente() const {
        return dniCliente;
    }

    int getDniVendedor() const {
        return dniVendedor;
    }

    // Métodos setter
    void setFecha(const Fecha& f) {
        fecha = f;
    }

    void setDniCliente(int dCliente) {
        dniCliente = dCliente;
    }

    void setDniVendedor(int dVendedor) {
        dniVendedor = dVendedor;
    }

    // Método para cargar datos de la venta
    void cargar() {
        int d, m, a;
        cout << "Ingrese la fecha de la venta (dia mes año): ";
        cin >> d >> m >> a;
        fecha.setDia(d);
        fecha.setMes(m);
        fecha.setAnio(a);

        cout << "Ingrese el DNI del cliente: ";
        cin >> dniCliente;

        cout << "Ingrese el DNI del vendedor: ";
        cin >> dniVendedor;
    }

    // Método para mostrar los datos de la venta
    void mostrar() const {
        cout << "Fecha de la venta: ";
        fecha.mostrarFecha(); // Usamos el nuevo método mostrarFecha()
        cout << "\nDNI del cliente: " << dniCliente;
        cout << "\nDNI del vendedor: " << dniVendedor << endl;
    }
};

#endif // VENTAS_H_INCLUDED
