#pragma once
#include "multa.h"

multa::multa()
{

}

multa::multa(int valor, int fechadepago, int fechademulta)
{

}

multa::~multa()
{

}

void multa::darvalor(int valor)
{
this->valor=valor;
}

int multa::obtenervalor(){
    return valor;
}

void multa::darfechadepago(int fechadepago)
{
    this->fechadepago=fechadepago;
}

int multa::obtenerfechadepago()
{
  return fechadepago;
}

void multa::darfechamulta(int fechademulta)
{
    this->fechademulta=fechademulta;
}

int multa::obtenerfechamulta()
{
    return fechademulta;
}
