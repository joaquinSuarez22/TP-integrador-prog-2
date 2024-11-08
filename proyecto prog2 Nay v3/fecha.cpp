#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include "fecha.h"
using namespace std;


//Fecha::Fecha() : _dia(0), _mes(0), _anio(0) {}

Fecha::Fecha(int dia, int mes, int anio) : _dia(dia), _mes(mes), _anio(anio) {}

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
}

