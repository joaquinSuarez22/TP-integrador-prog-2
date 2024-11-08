#include <iostream>
#include <cstring>  // Para strcpy
#include "consola.h"
using namespace std;

// Métodos set

void Consola::setFabricante(string fab)
{
    fabricante = fab;
}

void Consola::setVersion(string ver)
{
    version = ver;
}

void Consola::setAlmacenamiento(int alm)
{
    almacenamiento = alm;
}

// Métodos get

string Consola::getFabricante()
{
    return fabricante;
}

string Consola::getVersion()
{
    return version;
}

int Consola::getAlmacenamiento()
{
    return almacenamiento;
}

// Mostrar especificaciones

void Consola::mostrarEspecificaciones()
{

    mostrarDetalles();
    cout<<endl;
    cout << "Fabricante: " << fabricante << endl;
    cout << "Versión: " << version << endl;
    cout << "Almacenamiento: " << almacenamiento << " GB" << endl;


    cout << "-------------------------------------------" <<endl;

}

