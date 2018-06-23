#ifndef INVENTARIO_H
#define INVENTARIO_H
#include"articulo.h"
#include <vector>

class inventario
{
private:
    vector<articulo>   listaArticulos;
    vector<Profesor>   listaProfesor ;
    vector<Estudiante>   listaEstudiante;
    vector<articulo>   listaPrestamos;

public:
    inventario();
    ~inventario();
    bool buscarArticulo(int identificador);
    articulo obtenerarticulo(int identificador);
    void darArticulo(articulo art);

    void agregarProfesor(Profesor profesor);
    void agregarEstudiante(Estudiante estudiante);
    void agregarPrestamo(articulo articulo);


    bool buscarProfesor(int identificador);
    Profesor obtenerProfesor(int identificador);
    bool buscarEstudiante(int identificador);
    Estudiante obtenerEstudiante(int identificador);

    void articulosActivos();
    void articulosInactivos();

    void devolverPrestamo(int estudiante, int codArticulo);
    void mostrarPrestamos();

    void modificarEstudiante(Estudiante Usuario);
    void modificarProfesor(Profesor Usuario);
    void modificarArticulo(articulo articulo);
    int consultarMulta(int codEst);

    void leerArticulos();
    void leerUsuario();
    void leerPrestamos();
    void guardarInformacion();
    vector<string> split_istringstream(string str);//esto es auxiliar para separar palabras por cada espacio en blanco

};

#endif // INVENTARIO_H
