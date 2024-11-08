#include <iostream>
#include "producto.h"
#include <cstring>
using namespace std;

// Setters
void Producto::setPrecio(float pre) {
    precio = pre;
}

void Producto::setID(int id) {
    _id = id;
}

void Producto::setNombre(string nom) {
    nombre = nom;
}

void Producto::setCategoria(int cat) {
    categoria = cat;
}

void Producto::setStock(int cant) {
    stock = cant;
}

// Getters
int Producto::getID() {
    return _id;
}

string Producto::getNombre() {
    return nombre;
}

float Producto::getPrecio() {
    return precio;
}

int Producto::getCategoria() {
    return categoria;
}

// Otros métodos
void Producto::agregarStock(int cant) {
    stock += cant;
}

void Producto::mostrarDetalles() {
    cout << "DETALLES" << endl;
    cout << "ID: " << _id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
    cout << "Stock: " << stock << endl;
    cout << "Categoria: " << categoria << endl;
}

void Producto::vender(int cant) {
    stock -= cant;
}
