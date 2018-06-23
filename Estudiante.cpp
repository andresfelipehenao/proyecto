#pragma once
#include "Estudiante.h"


Estudiante::Estudiante()
{

}

Estudiante::Estudiante(int identificador, string nombre, int telefono, int multa)
{
    this->identificador=identificador;
    this->nombre=nombre;
    this->telefono=telefono;
    this->multa=multa;
}

Estudiante::~Estudiante()
{

}

void Estudiante::daridentificador(int identificador)
{
    this->identificador=identificador;
}

int Estudiante::obteneridentificador()
{
    return identificador;
}

void Estudiante::darnombre(string nombre)
{
    this->nombre=nombre;
}

string Estudiante::obtenernombre()
{
    return nombre;
}

void Estudiante::dartelefono(int telefono)
{
    this->telefono=telefono;
}

int Estudiante::obtenertelefono()
{
    return telefono;
}

void Estudiante::darmulta(int multa)
{
   this->multa=multa;
}

int Estudiante::obtenermulta()
{
    return multa;
}
