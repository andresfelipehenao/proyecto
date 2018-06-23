#ifndef ARTICULO_H
#define ARTICULO_H

#include "Profesor.h"
#include "Estudiante.h"
using namespace std;
class articulo
{
    public:
        int identificador;
        bool estado;
        string nombre;
        int valor;
        Profesor profesor;
        int fechaPrestamo;
        Estudiante estudiante;
        int fechaDevolucion;
        string tipo;

    public:
        articulo();
        /**articulo(string tipo,int identificador, bool estado, string nombre, int valor, Profesor profesor,
                   int fechaprestamo, Estudiante estudiante, int fechaDevolucion);*/
        articulo(string tipo,int identificador, bool estado, string nombre, int valor, Profesor profesor);
        virtual ~articulo() {};
        void daridentificador(int identificador);
        int obteneridentificador();
        string obtenerTipo();
        void darTipo(string tipo);
        void darestado(bool estado);
        bool obtenerestado();
        void darnombre(string nombre);
        string obtenernombre();
        void darvalor(int valor);
        int obtenervalor();
        void darprofesor(Profesor profesor);
        Profesor obtenerprofesor();
        void darfechaprestamo(int fechaprestamo);
        int obtenerfechaprestamo();
        void darestudiante(Estudiante estudiante);
        Estudiante obtenerestudiante();
        void darfechadevolucion(int fechadevolucion);
        int obtenerfechadevolucion();
        void depreciarmuebles(int tiempo);
        void depreciarcomputo(int tiempo);
        void depreciarprestamos(int tiempo);


    protected:

    private:
};

#endif // ARTICULO_H
