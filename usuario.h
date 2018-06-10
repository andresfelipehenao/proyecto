#ifndef USUARIO_H
#define USUARIO_H

#include "Profesor.h"
#include "Estudiante.h"
using namespace std;

class usuario
{
private:
    int idetnificador;
    string nombre;
    int codigo;
    int telefono;


public:
    usuario(int identificador, string nombre, int codigo int telefono);
    usuario();
    ~usuario();
    void daridenificador (int identificador);
    int obteneridentificador();
    bool obtenerestado();
    void darnombre(string nombre);
    string obtenernombre();
    void darcodigo (int codigp);
    int obtenercodigo();
    void dartelefono(int telefono);
    int obtenertelefono();
};

#endif // USUARIO_H
