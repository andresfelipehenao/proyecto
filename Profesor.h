#ifndef PROFESOR_H
#define PROFESOR_H
using namespace std;

class Profesor
{
private:
    int identificador;
    string nombre;
    int telefono;

public:
    Profesor(int identificador, string nombre, int telefono);
    Profesor();
    ~Profesor();
    void daridentificador(int identificador);
    int obteneridentificador();
    void  darnombre(string nombre);
    string obtenernombre();
    void  dartelefono( int telefono);
    int obtenertelefono();

};

#endif // PROFESOR_H
