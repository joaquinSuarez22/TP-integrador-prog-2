#ifndef CONSOLA_H_INCLUDED
#define CONSOLA_H_INCLUDED
#include <cstring>
#include "producto.h"


class Consola : public Producto
{
private:
    string fabricante;  // Fabricante de la consola
    string version;     // Versión o modelo de la consola
    int almacenamiento;   // Capacidad de almacenamiento en GB

    //pasar todo lo q sea nombres de char a string

public:

    Consola()
    {
    }

    //constructor
    Consola(int id, string nombre, int categoria, float precio, int stock)
    {
        setID(id);
        setNombre(nombre);
        setCategoria(categoria);
        setPrecio(precio);
        setStock(stock);

        cout<<"ingresa fabricante: ";
        cin>>fabricante;
        cout<<"ingresa version: ";
        cin>>version;
        cout<<"ingresa almacenamiento: ";
        cin>>almacenamiento;
        cout<<endl;

    }


    // Métodos set
    void setFabricante(string fab);
    void setVersion(string ver);
    void setAlmacenamiento(int alm);

    // Métodos get
    string getFabricante();
    string getVersion();
    int getAlmacenamiento();

    // Mostrar especificaciones // hay q mostrar tambien las que hereda de producto y las suyas propias
    void mostrarEspecificaciones();
};





#endif // CONSOLA_H_INCLUDED
