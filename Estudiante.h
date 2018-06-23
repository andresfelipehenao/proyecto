#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;


class Estudiante
{
private:
    int identificador;
    string nombre;
    int telefono;
    int multa;

public:
    Estudiante();
    Estudiante(int identificador, string nombre, int telefono, int multa);

    ~Estudiante();
    void daridentificador(int identificador);
    int obteneridentificador();
    void darnombre(string nombre);
    string obtenernombre();
    void dartelefono( int telefono);
    int obtenertelefono();
    void darmulta(int codigo);
    int obtenermulta();


};

#endif // ESTUDIANTE_H

