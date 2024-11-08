#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED

#include <cstring> // Para usar strcpy

///clase padre "persona" - clases hijas "vendedor" "cliente"

class Persona
{
protected:
    char nombre[30];
    char apellido[30];
    char DNI[9]; // Ajustado para incluir el carácter nulo

public:
    // Constructor
    Persona(const char* n, const char* a, const char* dni)
    {
        strcpy(nombre, n);
        strcpy(apellido, a);
        strcpy(DNI, dni);
    }

    // Métodos getter
    const char* getNombre() const
    {
        return nombre;
    }

    const char* getApellido() const
    {
        return apellido;
    }

    const char* getDNI() const
    {
        return DNI;
    }

    // Métodos setter
    void setNombre(const char* n)
    {
        strcpy(nombre, n);
    }

    void setApellido(const char* a)
    {
        strcpy(apellido, a);
    }

    void setDNI(const char* dni)
    {
        strcpy(DNI, dni);
    }
};


#endif // PERSONAS_H_INCLUDED
