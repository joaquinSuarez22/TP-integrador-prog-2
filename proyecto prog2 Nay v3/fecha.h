#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <cstring>
#include <iostream>

using namespace std;

class Fecha {
private:
    int _dia, _mes, _anio;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    int getDia() const;
    int getMes() const;
    int getAnio() const;
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void mostrarFecha() const; // Método para mostrar la fecha
};

//Fecha::Fecha() : _dia(0), _mes(0), _anio(0) {}

/*Fecha::Fecha(int dia, int mes, int anio) : _dia(dia), _mes(mes), _anio(anio) {}

int Fecha::getDia() const {
    return _dia;
}

int Fecha::getMes() const {
    return _mes;
}

int Fecha::getAnio() const {
    return _anio;
}

void Fecha::setDia(int dia) {
    _dia = dia;
}

void Fecha::setMes(int mes) {
    _mes = mes;
}

void Fecha::setAnio(int anio) {
    _anio = anio;
}

void Fecha::mostrarFecha() const {
    cout << _dia << "/" << _mes << "/" << _anio; // Muestra la fecha en formato dd/mm/aaaa
}*/

#endif // FECHA_H_INCLUDED
