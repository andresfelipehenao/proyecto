#pragma once
#include "profesor.h"


Profesor::Profesor(int identificador, string nombre, int telefono)
{
    this->identificador=identificador;
    this->nombre=nombre;
    this->telefono=telefono;

}

Profesor::Profesor()
{

}

Profesor::~Profesor()
{

}

void Profesor::daridentificador(int identificador)
{
 this->identificador=identificador;
}

int Profesor::obteneridentificador()
{
    return identificador;
}

void Profesor::darnombre(string nombre)
{
    this->nombre=nombre;
}

string Profesor::obtenernombre()
{
    return nombre;
}

void Profesor::dartelefono(int telefono)
{
    this->telefono=telefono;
}

int Profesor::obtenertelefono()
{
    return telefono;
}
