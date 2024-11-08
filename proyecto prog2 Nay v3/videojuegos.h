#ifndef VIDEOJUEGOS_H_INCLUDED
#define VIDEOJUEGOS_H_INCLUDED
#include <cstring>
#include "producto.h"

//using namespace std;

class Videojuegos : public Producto
{
private:
    char Genero[30];
    char Plataforma[30];

public:

    Videojuegos()
    {
    }


    Videojuegos(int id, string nombre, int categoria, float precio, int stock)
    {
        setID(id);
        setNombre(nombre);
        setCategoria(categoria);
        setPrecio(precio);
        setStock(stock);
    }


    // Setters
    void setGenero(char* genero);
    void setPlataforma(char* plataforma);

    // Getters
    char* getGenero();
    char* getPlataforma();


    void mostrarEspecificaciones();


};


#endif // VIDEOJUEGOS_H_INCLUDED
