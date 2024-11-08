#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <cstring>
#include "personas.h"

class Cliente : public Persona
{
private:
    char mail[30];
    char telefono[15];

public:
    // Constructor
    Cliente(const char* n, const char* a, const char* dni, const char* m, const char* t);

    // Métodos getter
    const char* getMail() const;
    const char* getTelefono() const;

    // Métodos setter
    void setMail(const char* m);
    void setTelefono(const char* t);
};

#endif // CLIENTE_H_INCLUDED
