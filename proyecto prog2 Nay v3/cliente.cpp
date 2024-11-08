#include "cliente.h"
#include <cstring> // Para usar strcpy

// Constructor
Cliente::Cliente(const char* n, const char* a, const char* dni, const char* m, const char* t)
    : Persona(n, a, dni) // Llamada al constructor de la clase madre
{
    strcpy(mail, m);
    strcpy(telefono, t);
}

// Métodos getter
const char* Cliente::getMail() const
{
    return mail;
}

const char* Cliente::getTelefono() const
{
    return telefono;
}

// Métodos setter
void Cliente::setMail(const char* m)
{
    strcpy(mail, m);
}

void Cliente::setTelefono(const char* t)
{
    strcpy(telefono, t);
}

