#ifndef DETALLE_DE_VENTAS_H_INCLUDED
#define DETALLE_DE_VENTAS_H_INCLUDED
#include <cstring>


class Detalle_Venta
{
private:
    int idVenta;
    int idJuego;
    int cantidad;
    float precio;

public:
    // Constructor
    Detalle_Venta(int idV = 0, int idJ = 0, int cant = 0, float pre = 0.0) : idVenta(idV), idJuego(idJ), cantidad(cant), precio(pre) {}

    // Métodos getter
    int getIdVenta() const
    {
        return idVenta;
    }

    int getIdJuego() const
    {
        return idJuego;
    }

    int getCantidad() const
    {
        return cantidad;
    }

    float getPrecio() const
    {
        return precio;
    }

    // Métodos setter
    void setIdVenta(int idV)
    {
        idVenta = idV;
    }

    void setIdJuego(int idJ)
    {
        idJuego = idJ;
    }

    void setCantidad(int cant)
    {
        cantidad = cant;
    }

    void setPrecio(float pre)
    {
        precio = pre;
    }

    // Método para cargar los datos del detalle de la venta
    void cargar()
    {
        cout << "Ingrese el ID de la venta: ";
        cin >> idVenta;

        cout << "Ingrese el ID del juego: ";
        cin >> idJuego;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        cout << "Ingrese el precio: ";
        cin >> precio;
    }

    // Método para mostrar los datos del detalle de la venta
    void mostrar() const
    {
        cout << "ID de la venta: " << idVenta << endl;
        cout << "ID del juego: " << idJuego << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Precio: " << precio << endl;
    }
};



#endif // DETALLE_DE_VENTAS_H_INCLUDED
