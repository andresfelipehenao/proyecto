#pragma once
#include "Profesor.h"
#include "Estudiante.h"
#include "usuario.h"
#include "multa.h"
#include "articulo.h"

using namespace std;

articulo::articulo()
{

}


/**articulo::articulo(string tipo,int identificador, bool estado, string nombre, int valor, Profesor profesor,
                   int fechaPrestamo, Estudiante estudiante, int fechaDevolucion)
{
    this->tipo = tipo;
    this->identificador= identificador;
    this->estado = estado;
    this->nombre = nombre;
    this->valor = valor;
    this->profesor = profesor;
    this->fechaPrestamo = fechaPrestamo;
    this->estudiante = estudiante;
    this->fechaDevolucion = fechaDevolucion;
}*/

articulo::articulo(string tipo,int identificador, bool estado, string nombre, int valor, Profesor profesor)
{
    this->tipo = tipo;
    this->identificador= identificador;
    this->estado = estado;
    this->nombre = nombre;
    this->valor = valor;
    this->profesor = profesor;
}


void articulo::daridentificador(int identificador)
{
    this->identificador= identificador;
}

int articulo::obteneridentificador()
{
        return identificador;
}
void articulo::darestado(bool estado)
{
    this->estado = estado;
}
bool articulo::obtenerestado()
{
    return estado;
}

void articulo::darnombre (string nombre)
{
}
string articulo::obtenernombre()
{
    return nombre;
}

void articulo::darvalor (int valor)
{

}
int articulo::obtenervalor()
{
    return valor;
}

void articulo::darprofesor (Profesor profesor)
{
    this->profesor = profesor;
}
Profesor articulo::obtenerprofesor()
{
    return profesor;
}

void articulo::darfechaprestamo (int fechaPrestamo)
{
    this->fechaPrestamo = fechaPrestamo;
}
int articulo::obtenerfechaprestamo()
{
    return fechaPrestamo;
}
void articulo::darestudiante(Estudiante estudiante)
{
    this->estudiante = estudiante;
}

Estudiante articulo::obtenerestudiante()
{
    return estudiante;
}

void articulo::darfechadevolucion (int fechadevolucion)
{
    this->fechaDevolucion = fechaDevolucion;
}
int articulo::obtenerfechadevolucion()
{
    return fechaDevolucion;
}

void articulo::depreciarmuebles(int identificadorTiempo)
{
    if ((identificadorTiempo-valor)< valor)
    {
        estado = false;
        valor=0;
    }
    else
    {
        valor=(identificadorTiempo-valor);
    }
}
void articulo::depreciarcomputo (int identificadorTiempo)
{
     if ((identificadorTiempo-valor)< valor)
    {
        estado = false;
        valor=0;
    }
    else
    {
        valor=(identificadorTiempo-valor);
    }

}
void articulo::depreciarprestamos (int identificadorTiempo)
{
     if ((identificadorTiempo-valor)< valor)
    {
        estado = false;
        valor=0;
    }
    else
    {
        valor=(identificadorTiempo-valor);
    }

}


string articulo::obtenerTipo()
{
    return tipo;
}

void articulo::darTipo(string tipo)
{
    this->tipo=tipo;
}

