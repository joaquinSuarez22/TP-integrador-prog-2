#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include <cstring>
#include "personas.h"



class Vendedor : public Persona
{
protected:
    int IDVendedor;
    float salario;
    bool estado;

public:
    int _idV=0;
    // Constructor
    //Vendedor(const char* n, const char* a, const char* dni, int id, float s, bool e);
    Vendedor() : Persona("", "", ""), IDVendedor(0), salario(0.0), estado(true) {}

    // Métodos getter
    int getVendedor() const;
    float getSalario() const;
    bool getEstado() const;

    // Métodos setter
    void setVendedor(int id);


    void setSalario(float s);
    void setEstado(bool e);
};

#endif // VENDEDOR_H_INCLUDED
