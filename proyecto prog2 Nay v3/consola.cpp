#include <iostream>
#include <cstring>  // Para strcpy
#include "consola.h"
using namespace std;

// M�todos set

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

// M�todos get

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
    cout << "Versi�n: " << version << endl;
    cout << "Almacenamiento: " << almacenamiento << " GB" << endl;


    cout << "-------------------------------------------" <<endl;

}

