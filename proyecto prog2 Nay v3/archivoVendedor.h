#ifndef archivo_H
#define archivo_H
#include <iostream>
#include <string>
#include "gestioninterna.h"
#include "vendedor.h"


class ArchivoVendedor
{

protected:

public:
    ///GRABAR REGISTROS///
    bool grabarRegistros(Vendedor b);
    /// LEER REGISTROS ///
    bool leerRegistros(Vendedor &b);
    bool listarRegistros(int id);
    /// EJEMPLO: BUSCAR LEGAJO, EN ESTE CASO ID///
    int buscarID(int id);
    /// EJEMPLO: BUSCAR REGISTRO EN ESA POSICION DONDE SE ENCONTRÓ EL LEGAJO, EN ESTE CASO EL ID ///
    Vendedor buscarRegistro(int b);
    bool leerID(Vendedor &b);
    bool actualizarRegistro(int n, Vendedor &b);


};







#endif
