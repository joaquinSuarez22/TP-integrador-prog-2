
#include "vendedor.h"
#include <cstring> // Para usar strcpy

// Constructor
/*Vendedor::Vendedor(const char* n, const char* a, const char* dni, int id, float s, bool e)
    : Persona(n, a, dni) // Llamada al constructor de la clase madre
{
    IDVendedor = id;
    salario = s;
    estado = e;
}*/

// Métodos getter
int Vendedor::getVendedor() const
{
    return IDVendedor;
}

float Vendedor::getSalario() const
{
    return salario;
}

bool Vendedor::getEstado() const
{
    return estado;
}

// Métodos setter
void Vendedor::setVendedor(int id)
{
    IDVendedor = id;
}

void Vendedor::setSalario(float s)
{
    salario = s;
}

void Vendedor::setEstado(bool e)
{
    estado = e;
}
