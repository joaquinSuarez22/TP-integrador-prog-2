#ifndef archivoGestionInterna_H
#define archivoGestionInterna_H

#include <iostream>
#include <string>

#include "gestioninterna.h"
#include "vendedor.h"


class ArchivoGestionInterna
{

public:

    bool grabarRegistros(float b);
    bool leerRegistros(GestionInterna &b);
    bool listarRegistros();
    bool actualizarRegistro(float n, float &b);
    bool buscarLuz(float luz);
    GestionInterna buscarRegistroLuz(float luz);

};
#endif
