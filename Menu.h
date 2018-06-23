#ifndef MENU_H
#define MENU_H

#include "inventario.h"
using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        inventario inventarioo;
        void visualizar();
        void submenuinventario();
        void submenuPrestamo();
        void submenuUsuario();

    protected:

    private:
};

#endif // MENU_H
