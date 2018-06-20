#ifndef ARTICULO_H
#define ARTICULO_H


class articulo
{
    public:
        int identificador;
        bool estado;
        string nombre;
        int valor;
        Profesor profesor;
        int fechaPrestamo;
        Estudiante Estudiante;
        int fechaDevolucion;

    public:
        articulo() {};
        virtual ~articulo() {};
        void daridentificador(int identificador);
        int obteneridentificador();
        void darestado(bool estado);
        bool obtenerestado();
        void darnombre(string nombre);
        string obtenernombre();
        void darvalor(int valor);
        int obtenervalor();
        void darprofesor(profesor profesor);
        profesor obtenerprofesor();
        int darfechaprestamo(int fechaprestamo);
        void darestudiante(estudiante estudiante);
        estudiante obtenerestudiante();
        void darfechadevolucion(int fechadevolucion);
        int obtenerfechadevolucion();
        void depreciarmuebles(int identificador int tiempo);
        void depreciarcomputo(int identificador int tiempo);
        void depreciarprestamos(int identificador int tiempo);


    protected:

    private:
};

#endif // ARTICULO_H
