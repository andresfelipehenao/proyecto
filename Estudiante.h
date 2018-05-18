#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
using namespace std;


class Estudiante
{
private:
    int identificador;
    string nombre;
    int telefono;
    int codigo;

public:
    Estudiante();
    Estudiante(int identificador, string nombre, int telefono, int codigo);
    
    ~Estudiante();
    void daridentificador(int identificador);
    int obteneridentificador();
    void darnombre(string nombre);
    string obtenernombre();
    void dartelefono( int telefono);
    int obtenertelefono();
    void darcodigo(int codigo);
    int obtenercodigo();


};

#endif // ESTUDIANTE_H
