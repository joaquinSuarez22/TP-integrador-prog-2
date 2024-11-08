#ifndef gestioninterna_H
#define gestioninterna_H


#include <iostream>
#include <string>

using namespace std;

class GestionInterna{
protected:
    float costoLuz;
    float costoAgua;
    float costoMantenimiento;
public:
    GestionInterna(){
    costoLuz=0;
    costoAgua=0;
    costoMantenimiento=0;
    }
    float getCostoLuz(){return costoLuz;}
    float getCostoAgua(){return costoAgua;}
    float getCostoMantenimiento(){return costoMantenimiento;}

    void setCostoLuz(float luz);
    void setCostoAgua(float agua);
    void setCostoMantenimiento(float mantenimiento);

};

class Gestion
{

public:
    void mvendedores();
    void mcostos();
    void mprecios();
    void mproductos();

};

#endif
