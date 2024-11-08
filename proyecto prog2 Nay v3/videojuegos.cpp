# include <iostream>
# include <cstdlib>
# include <string>
# include <cstring>  // Necesario para strcpy

#include "videojuegos.h"

using namespace std;


// Setters
void Videojuegos::setGenero(char* genero)
{
    strcpy(Genero, genero);
}

void Videojuegos::setPlataforma(char* plataforma)
{
    strcpy(Plataforma, plataforma);
}

// Getters
char* Videojuegos::getGenero()
{
    return Genero;
}

char* Videojuegos::getPlataforma()
{
    return Plataforma;
}

void Videojuegos::mostrarEspecificaciones()
{

    cout<<"Genero: "<<Genero <<endl;

    cout<<"Plataforma: "<<Plataforma <<endl;


}
