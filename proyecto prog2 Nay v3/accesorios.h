#ifndef ACCESORIOS_H_INCLUDED
#define ACCESORIOS_H_INCLUDED
#include <cstring>
#include "producto.h"

using namespace std;

class Accesorios : public Producto
{
private:
    char tipo[30];             // Ej: "periferico", "control"
    char compatibilidad[30];   // Ej: "PS5", "Xbox", etc.

public:

    Accesorios()
    {

    }
    Accesorios(int id, string nombre, int categoria, float precio, int stock)
    {
        setID(id);
        setNombre(nombre);
        setCategoria(categoria);
        setPrecio(precio);
        setStock(stock);
    }

    // Métodos set
    void setTipo(const char* t);           // Ajustar tipo
    void setCompatibilidad(const char* com);  // Ajustar compatibilidad

    // Métodos get
    char* getTipo();
    char* getCompatibilidad();

    // Otros métodos
    void mostrarCompatibilidad();
    void mostrarEspecificaciones();

};

#endif // ACCESORIOS_H_INCLUDED
