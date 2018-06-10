#ifndef INVENTARIO_H
#define INVENTARIO_H
#include"articulo.h"

class inventario
{
    private:
    vector <Articulos>listaaritculos;


public:
    articulo obtenerarticulo(string nombre,int identificador, int valor);
    void dararticulo(Articulo articulo);
    void consultararticulo();
};

#endif // INVENTARIO_H
