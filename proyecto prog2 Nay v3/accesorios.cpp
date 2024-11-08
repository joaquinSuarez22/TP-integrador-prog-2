#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>  // Necesario para strcpy

#include "accesorios.h"

using namespace std;

// Métodos set

void Accesorios::setTipo(const char* t)
{
    strncpy(tipo, t, sizeof(tipo) - 1);    // Copia segura de la cadena
    tipo[sizeof(tipo) - 1] = '\0';         // Asegura el fin de la cadena
}

void Accesorios::setCompatibilidad(const char* com)
{
    strncpy(compatibilidad, com, sizeof(compatibilidad) - 1);  // Copia segura de la cadena
    compatibilidad[sizeof(compatibilidad) - 1] = '\0';         // Asegura el fin de la cadena
}

// Métodos get

char* Accesorios::getTipo()
{
    return tipo;  // Retorna la cadena de caracteres (array de char)
}

char* Accesorios::getCompatibilidad()
{
    return compatibilidad;
}

// Otros métodos

void Accesorios::mostrarCompatibilidad()
{
    cout << "Compatibilidad: " << compatibilidad << endl;
}

///agregar el mostrar de la clase madre producto??
void Accesorios::mostrarEspecificaciones()
{
    cout << "Tipo: " << tipo << endl;
    cout << "Compatibilidad: " << compatibilidad << endl;
}
