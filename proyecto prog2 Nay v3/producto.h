#ifndef PROYECTO_H_INCLUDED
#define PROYECTO_H_INCLUDED

#include <string>
#include <cstring>
using namespace std;

///CLASE PADRE DE videojuegos, consola y accesorios
class Producto {

protected:
    int _id;
    string nombre;
    float precio;
    int stock;
    int categoria;

public:

    Producto();

    Producto(int id, const string& nombre, int categoria, float precio, int stock)
        : _id(id), nombre(nombre), categoria(categoria), precio(precio), stock(stock) {}

    // set
    void setStock(int cant);
    void setPrecio(float precio);
    void setID(int ID);
    void setNombre(string nombre);
    void setCategoria(int categoria);

    // get
    int getID();
    string getNombre();
    int getCategoria();
    int getStock();
    float getPrecio();

    // otros métodos
    void agregarStock(int cantidad);
    void vender(int cantidad);
    void mostrarDetalles();
};

#endif // PROYECTO_H_INCLUDED
