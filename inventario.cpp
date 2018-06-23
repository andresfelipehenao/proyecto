#pragma once
#include "inventario.h"
#include "articulo.h"
#include "Estudiante.h"
#include "Profesor.h"

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <sstream>
#include <algorithm>

inventario::inventario()
{
    this->listaArticulos = vector<articulo>();
    this->listaProfesor  = vector<Profesor>();
    this->listaEstudiante = vector<Estudiante>();
    this->listaPrestamos = vector<articulo>();

    leerUsuario();
    leerArticulos();
    leerPrestamos();

}

inventario::~inventario()
{

}



void inventario::darArticulo(articulo arti)
{
    listaArticulos.insert(listaArticulos.end(),arti);
}

void inventario::agregarProfesor(Profesor profesor)
{
    listaProfesor.insert(listaProfesor.end(),profesor);
}

void inventario::agregarEstudiante(Estudiante estudiante)
{
     listaEstudiante.insert(listaEstudiante.end(),estudiante);
}

void inventario::agregarPrestamo(articulo arti)
{
    listaPrestamos.insert(listaPrestamos.end(),arti);
}
articulo inventario::obtenerarticulo(int identificador)
{
    for (int i = 0; i < listaArticulos.size(); i++)
    {
        if (listaArticulos[i].obteneridentificador() == identificador)
        {
            return listaArticulos[i];
        }
    }
}
bool inventario::buscarArticulo(int identificador)
{
    for (int i = 0; i < listaArticulos.size(); i++)
    {
        if (listaArticulos[i].obteneridentificador() == identificador)
        {
            return true;
        }
    }
    return false;
}


bool inventario::buscarProfesor(int identificador)
{
    for (int i = 0; i < listaProfesor.size(); i++)
    {
        if (listaProfesor[i].obteneridentificador() == identificador)
        {
            return true;
        }
    }
    return false;
}

Profesor inventario::obtenerProfesor(int identificador)
{
     for (int i = 0; i < listaProfesor.size(); i++)
    {
        if (listaProfesor[i].obteneridentificador() == identificador)
        {
            return listaProfesor[i];
        }
    }
}

bool inventario::buscarEstudiante(int identificador)
{
    for (int i = 0; i < listaEstudiante.size(); i++)
    {
        if (listaEstudiante[i].obteneridentificador() == identificador)
        {
            return true;
        }
    }
    return false;
}

Estudiante inventario::obtenerEstudiante(int identificador)
{
    for (int i = 0; i < listaEstudiante.size(); i++)
    {
        if (listaEstudiante[i].obteneridentificador() == identificador)
        {
            return listaEstudiante[i];
        }
    }
}

int inventario::consultarMulta(int codEst)
{
    cout << obtenerEstudiante(codEst).obtenermulta()<<endl;
}


void inventario::articulosActivos()
{
     for(int i=0; i<listaArticulos.size(); i++)
    {
        if(listaArticulos[i].obtenerestado()==true)
        {
            cout<< "identificador: " <<  listaArticulos[i].obteneridentificador()
                << " nombre: " << listaArticulos[i].obtenernombre()<<endl;
        }

    }
}

void inventario::articulosInactivos()
{
    for(int i=0; i<listaArticulos.size(); i++)
    {
        if(listaArticulos[i].obtenerestado()==false)
        {
            cout<< "identificador: " <<  listaArticulos[i].obteneridentificador()
                << " nombre: " << listaArticulos[i].obtenernombre()<<endl;
        }

    }
}

void inventario::devolverPrestamo(int estudiante, int codArticulo)
{
    for(int i=0; i<listaPrestamos.size(); i++)
    {
        if(listaPrestamos[i].obteneridentificador() == codArticulo)
        {
            int demora;
            cout << "ingrese tiempo de demora para entregar articulo  ";
            cin >> demora;
            if(listaPrestamos[i].obtenerfechadevolucion() < demora)
            {
                int multa= abs(listaPrestamos[i].obtenerfechadevolucion() - demora)* 200;
                Estudiante est = listaPrestamos[i].obtenerestudiante();
                est.darmulta(multa);
                modificarEstudiante(est);
            }
            vector<articulo>::iterator a = listaPrestamos.begin()+i;
            listaPrestamos.erase(a);
        }

    }
}

void inventario::mostrarPrestamos()
{
    for(int i=0; i<listaPrestamos.size(); i++)
    {

        cout<< " articulo = " << listaPrestamos[i].obtenernombre()
            << "\n esudiante = " << listaPrestamos[i].obtenerestudiante().obtenernombre()
            << "\n tiempo = "<< listaPrestamos[i].obtenerfechadevolucion()<<endl;
    }
}

void inventario::modificarEstudiante(Estudiante estudiante)
{
    for (int i = 0; i < listaEstudiante.size(); i++)
    {
        if (listaEstudiante[i].obteneridentificador() == estudiante.obteneridentificador())
        {
            vector<Estudiante>::iterator a = listaEstudiante.begin()+i;
            listaEstudiante.erase(a);
            agregarEstudiante(estudiante);
        }
    }
}

void inventario::modificarProfesor(Profesor profesor)
{
    for (int i = 0; i < listaProfesor.size(); i++)
    {
        if (listaProfesor[i].obteneridentificador() == profesor.obteneridentificador())
        {
            vector<Profesor>::iterator a = listaProfesor.begin()+i;
            listaProfesor.erase(a);
            agregarProfesor(profesor);
        }
    }

}

void inventario::modificarArticulo(articulo arti)
{
    for (int i = 0; i < listaArticulos.size(); i++)
    {
        if (listaArticulos[i].obteneridentificador() == arti.obteneridentificador())
        {
            vector<articulo>::iterator a = listaArticulos.begin()+i;
            listaArticulos.erase(a);
            darArticulo(arti);
        }
    }
}

void inventario::leerArticulos()
{
    ifstream llenar("inventario.txt",ifstream::in);
    string linea;
    articulo arti;
    vector<string> lectura;

    while (getline(llenar,linea))
    {
        lectura = split_istringstream(linea);
        string tipo = lectura[0];
        int identificador = atoi(lectura[1].c_str());
        bool estado = !(lectura[2] == "0");
        string nombre = lectura[3];
        int valor = atoi(lectura[4].c_str());
        int codProfesor =  atoi(lectura[5].c_str());
        Profesor profesor = obtenerProfesor(codProfesor);
        articulo(tipo,identificador,estado,nombre,valor, profesor);
        darArticulo(arti);
    }
    llenar.close();
}

void inventario::leerUsuario()
{
    fstream llenar ("usuario.txt",ifstream::in);
    Estudiante estudiante;
    Profesor profesor;
    string linea;
    vector<string> lectura;
    while (getline(llenar,linea))
    {

        lectura = split_istringstream(linea);

        if(lectura[0] == "estudiante")
        {
            int identificador= atoi(lectura[1].c_str());
            string nombre=lectura[2];
            int telefono=atoi(lectura[3].c_str());
            int multa=atoi(lectura[4].c_str());
            Estudiante(identificador, nombre,telefono, multa);

            agregarEstudiante(estudiante);
        }
        else
        {
            int identificador= atoi(lectura[1].c_str());
            string nombre=lectura[2];
            int telefono=atoi(lectura[3].c_str());
            Profesor(identificador, nombre,telefono);

            agregarProfesor(profesor);
        }
    }
    llenar.close();
}

void inventario::leerPrestamos()
{
    ifstream llenar ("prestamo.txt",ifstream::in);
    string linea;
    vector<string> lectura;
    while (getline(llenar,linea))
    {
        lectura = split_istringstream(linea);
        articulo arti = obtenerarticulo(atoi(lectura[0].c_str()));
        agregarPrestamo(arti);

    }
    llenar.close();
}

void inventario::guardarInformacion()
{
     ofstream archivo;
    archivo.open("inventario.txt", ios::out);
    for(int i=0; i<listaArticulos.size(); i++)
    {
        archivo << listaArticulos[i].obtenerTipo() << " "
                << listaArticulos[i].obteneridentificador() << " "
                << listaArticulos[i].obtenerestado() << " "
                << listaArticulos[i].obtenernombre() << " "
                << listaArticulos[i].obtenerprofesor().obteneridentificador() << " "
                <<endl;
    }
    archivo.close();

    archivo.open("usuario.txt",ios::out);
    for(int i=0; i<listaEstudiante.size(); i++)
    {
        archivo << "estudiante "
                << listaEstudiante[i].obteneridentificador() << " "
                << listaEstudiante[i].obtenernombre() << " "
                << listaEstudiante[i].obtenertelefono() << " "
                << listaEstudiante[i].obtenermulta() << " "
                <<endl;
    }
    for(int i=0; i<listaProfesor.size(); i++)
    {
        archivo <<"profesor "
                << listaProfesor[i].obteneridentificador()<< " "
                << listaProfesor[i].obtenernombre() << " "
                << listaProfesor[i].obtenertelefono() << " "
                <<endl;
    }

    archivo.close();

    archivo.open("prestamo.txt",ios::out);

    for(int i=0; i<listaPrestamos.size(); i++)
    {
        archivo << listaPrestamos[i].obteneridentificador()<<endl;
    }

    archivo.close();
}

vector<string> inventario::split_istringstream(string str)
{
    vector<string> resultado;
    istringstream isstream(str);
    string palabra;
    while(isstream >> palabra)
    {
        resultado.push_back(palabra);
    }
    return resultado;
}

