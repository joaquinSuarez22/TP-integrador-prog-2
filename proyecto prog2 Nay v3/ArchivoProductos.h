#ifndef ARCHIVOPRODUCTOS_H_INCLUDED
#define ARCHIVOPRODUCTOS_H_INCLUDED

#include <iostream>
#include <vector>
#include "producto.h"
#include <cstring>
using namespace std;

class ArchivoProductos
{
private:

    string _nombreArchivo;

public:
    ArchivoProductos(string nombreArchivo);

    bool Guardar(Producto producto);
    bool Guardar(Producto producto, int posicion);
    int Buscar(int IDProducto);
    Producto Leer(int posicion);
    int CantidadRegistros();
    void Leer(int cantidadRegistros, Producto *vector);

    void cargarProducto();
    void listarProductos();

    template <typename T> // como se usa esto?
    bool GuardarEnArchivo(T producto, const string& nombreArchivo);


    void mostrarTodosLosProductos();

};

#endif // ARCHIVOPRODUCTOS_H_INCLUDED


    /*
    // Funciones de listado ordenado
    void listarProductosOrdenadosPorNombre();
    void listarProductosOrdenadosPorCategoria();
    void listarProductosOrdenadosPorPrecio();
    void listarProductosOrdenadosPorFecha();
    void listarProductosOrdenadosPorMarca();
    void listarProductosOrdenadosPorDescuento();
    */
