#pragma once
#include "articulo.h"
#include "inventario.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Menu.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Menu::Menu()
{
    this->inventarioo = inventario();
}

Menu::~Menu()
{
    // dtor
}

void Menu::visualizar()
{
    int opc = -1;
    while (opc != 0)
    {
        system ("cls");
        cout <<"\2++++++++++++++++++++++++++" << endl;
        cout <<"++++++UNIVERSIDAD++++++++++" << endl;
        cout <<"+++++++++++++++++++++++++++" << endl;
        cout <<"++ selecione una opcion  ++" << endl;
        cout <<"++ 1 inventario          ++" << endl;
        cout <<"++ 2 prestamos           ++" << endl;
        cout <<"++ 3 usuarios            ++" << endl;
        cout <<"++ 4 Guardar información ++" << endl;
        cout <<"+++++++++++++++++++++++++++" << endl;
        cout <<"+++++++++++++++++++++++++++" << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            submenuinventario();
            break;
        case 2:
            submenuPrestamo();
            break;
        case 3:
            submenuUsuario();
            break;
        case 4:
            inventarioo.guardarInformacion();
            break;
        }
    }
}

void Menu::submenuinventario()
{
    int opcion;
    system ("cls");
    cout <<"++++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"++++++>>>inventario<<<++++++++++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"++ selecione una opcion             ++" << endl;
    cout <<"++ 1 Registrar articulo             ++" << endl;
    cout <<"++ 2 Modificar articulo             ++" << endl;
    cout <<"++ 3 Listado de articulos ACTIVOS   ++" << endl;
    cout <<"++ 4 Listado de articulos INACTIVOS ++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++++" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
        int identificador;
        cout << "ingrese identificador: " << endl;
        cin >> identificador;
        string nombreArticulo;
        cout << "ingrese Nombre Articulo: " << endl;
        cin >> nombreArticulo;
        string tipo;
        // 1 muebles 3 pestamo 2 computo
        cout << "ingrese Tipo escriba  \n -muebles \n -pestamo \n -computo: " << endl;
        cin >> tipo;
        int tiempo;
        cout << "ingrese Tiempo: " << endl;
        cin >> tiempo;
        int valor;
        cout << "ingrese valor: " << endl;
        cin >> valor;

        int codProfesor;
        cout << "ingrese cod profesor: " << endl;
        cin >> codProfesor;
        Profesor profesor = inventarioo.obtenerProfesor(codProfesor);

        articulo articuloNuevo = articulo(tipo,identificador, 1, nombreArticulo,valor, profesor);
        inventarioo.darArticulo(articuloNuevo);
    }
    break;

    case 2:
    {
        int codigo;
        cout << "ingrese el codigo de articulo" << endl;
        cin >> codigo;
        if (inventarioo.buscarArticulo(codigo))
        {
            articulo arti = inventarioo.obtenerarticulo(codigo);
            int opc;
            system ("cls");
            cout <<"++++++++++++++++++++++++++++" << endl;
            cout <<"++>>>MODIFICAR ARTICULO<<<++" << endl;
            cout <<"++++++++++++++++++++++++++++" << endl;
            cout <<"++ selecione una opcion   ++" << endl;
            cout <<"++ 1 Cambiar nombre       ++" << endl;
            cout <<"++ 2 Cambiar tipo         ++" << endl;
            cout <<"++ 3 Cambiar valor        ++" << endl;
            cout <<"++ 4 Cambiar Profesor     ++" << endl;
            cout <<"++ 5 Cambiar estado       ++" << endl;
            cout <<"++++++++++++++++++++++++++++" << endl;
            cout <<"++++++++++++++++++++++++++++" << endl;
            cin >> opc;
            switch (opc)
            {
            case 1:
            {
                string nombre;
                cout << "ingrese nuevo nombre :";
                cin >> nombre;
                arti.darnombre(nombre);
                inventarioo.modificarArticulo(arti);
            }
            break;

            case 2:
            {
                string tipo;
                cout << "ingrese Tipo :";
                cin >> tipo;
                arti.darTipo(tipo);
                inventarioo.modificarArticulo(arti);
            }
            break;
            case 3:
            {
                int valor;
                cout << "ingrese valor :";
                cin >> valor;
                arti.darvalor(valor);
                inventarioo.modificarArticulo(arti);
            }

            break;
            case 4:
            {
                int codigo;
                cout << "ingresar  codigo de Profesor :";
                cin >> codigo;
                arti.darprofesor(inventarioo.obtenerProfesor(codigo));
                inventarioo.modificarArticulo(arti);
            }

            break;
            case 5:
            {
                bool estado;
                cout << "ingresar  estado ACTIVO = 1, INACTIVO = 0 :";
                cin >> estado;
                arti.darestado(estado);
                inventarioo.modificarArticulo(arti);
            }
            break;
            }
        }
    }
    case 3:
    {
        inventarioo.articulosActivos();
    }
    break;
    case 4:
    {
        inventarioo.articulosInactivos();
    }
    break;
    }
}

void Menu::submenuPrestamo()
{
    int opcion;
    system ("cls");
    cout <<"+++++++++++++++++++++++++++++" << endl;
    cout <<"*****>>>MENU PRESTAMO<<<+++++" << endl;
    cout <<"+++++++++++++++++++++++++++++" << endl;
    cout <<"++ selecione una opcion   ++" << endl;
    cout <<"++ 1 ingresar prestamo   ++" << endl;
    cout <<"++ 2 devolver prestamo    ++" << endl;
    cout <<"++ 3 prestamos            ++" << endl;
    cout <<"++++++++++++++++++++++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
        int codarticulo;
        cout << "ingrese codigo ariculo" << endl;
        cin >> codarticulo;

        int estudiante;
        cout<<"ingrese estudiante: "<<endl;
        cin>>estudiante;
        Estudiante estu = inventarioo.obtenerEstudiante(estudiante);

        float tiempo;
        cout << "ingrese Tiempo del Prestamo: " << endl;
        cin >> tiempo;

        if (inventarioo.buscarArticulo(codarticulo))
        {
            articulo arti=inventarioo.obtenerarticulo(codarticulo);
            if (arti.obtenerestado())
            {
                arti.darestudiante(estu);
                arti.darfechadevolucion(tiempo);
                inventarioo.modificarArticulo(arti);
                inventarioo.agregarPrestamo(arti);
             }
            else
            {
                cout << "EL ARTICULO ESTA INACTIVO" << endl;
            }
        }

        else
        {
            cout << "EL ARTICULO NO EXISTE" << endl;
        }
        break;
    }

    case 2:
    {
        int estudiante;
        cout << "ingrese estudiante" << endl;
        cin >> estudiante;
        int codArticulo;
        cout << "ingrese articulo: " << endl;
        cin >> codArticulo;
        inventarioo.devolverPrestamo(estudiante, codArticulo);

    }
    break;

    case 3:
        inventarioo.mostrarPrestamos();
        break;
    }
}

void Menu::submenuUsuario()
{
    int opcion;
    system ("cls");
    cout <<"++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"+++++++++++>>>USUARIOS<<<+++++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"++ selecione una opcion     ++++++++" << endl;
    cout <<"++ 1 Registrar Estudiante   ++++++++" << endl;
    cout <<"++ 2 Modificar Estudiante   ++++++++" << endl;
    cout <<"++ 3 Registrar Profesor     ++++++++" << endl;
    cout <<"++ 4 Modificar Profesor     ++++++++" << endl;
    cout <<"++ 5 Multa de Estudiante    ++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++" << endl;
    cout <<"++++++++++++++++++++++++++++++++++++" << endl;
    cin>> opcion;

    switch(opcion)
    {
    case 1:
    {
        int identificador;
        cout<<"Ingresar codigo"<<endl;
        cin>>identificador;
        string nombre;
        cout<<"Ingresar Nombre: "<<endl;
        cin>>nombre;
        int telefono;
        cout<<"Ingresar Telefono:"<<endl;
        cin>>telefono;
        int valorM;
        cout<<"Ingresar valor de la multa"<<endl;
        cin>>valorM;

        Estudiante estudiante = Estudiante(identificador, nombre, telefono, valorM);
        inventarioo.agregarEstudiante(estudiante);
    }
    break;

    case 2:
    {
        int identificador;
        cout<<"ingrese el codigo de estudiante"<<endl;
        cin>>identificador;
        if(inventarioo.buscarEstudiante(identificador))
        {
            Estudiante estudiante = inventarioo.obtenerEstudiante(identificador);
            system ("cls");
            cout <<"+++++++++++++++++++++++++++++" << endl;
            cout <<"++>>MODIFICAR ESTUDIANTE<<++" << endl;
            cout <<"+++++++++++++++++++++++++++++" << endl;
            cout <<"++ selecione una opcion   ++" << endl;
            cout <<"++ 1 Cambiar nombre       ++" << endl;
            cout <<"++ 2 Cambiar telefono     ++" << endl;
            cout <<"++ 3 Cambiar valorM       ++" << endl;
            cout <<"++++++++++++++++++++++++++++" << endl;
            cout <<"++++++++++++++++++++++++++++" << endl;

            int opc;
            cin>>opc;
            switch(opc)
            {
            case 1:
            {
                string nombre;
                cout << "ingrese nuevo nombre :";
                cin >> nombre;
                estudiante.darnombre(nombre);
            }
            break;

            case 2:
            {
                int telefono;
                cout << "ingrese Telefono :";
                cin >> telefono;
                estudiante.dartelefono(telefono);
            }
            break;

            case 3:
            {
                int valorM;
                cout << "ingresar  valor de la Multa :";
                cin >> valorM;
                estudiante.darmulta(valorM);
            }

            break;

            }
        }
    }
    break;

    case 3:
    {
        int identificador;
        cout<<"Ingresar codigo"<<endl;
        cin>>identificador;
        string nombre;
        cout<<"Ingresar Nombre: "<<endl;
        cin>>nombre;
        int telefono;
        cout<<"Ingresar Telefono: "<<endl;
        cin>>telefono;

        Profesor profesor = Profesor(identificador, nombre, telefono);
        inventarioo.agregarProfesor(profesor);
    }
    break;

    case 4:
    {
        int codigo;
        cout<<"ingrese el codigo de Profesor"<<endl;
        cin>>codigo;
        if(inventarioo.buscarProfesor(codigo))
        {
            Profesor profesor = inventarioo.obtenerProfesor(codigo);
            system ("cls");
            cout <<"****************************" << endl;
            cout <<"**>>MODIFICAR PROFRESOR<<***" << endl;
            cout <<"****************************" << endl;
            cout <<"** selecione una opcion     " << endl;
            cout <<"** 1 Cambiar nombre         " << endl;
            cout <<"** 2 Cambiar telefono       " << endl;
            cout <<"****************************" << endl;
            cout <<"****************************" << endl;

            int opc;
            cin>>opc;
            switch(opc)
            {
            case 1:
            {
                string nombre;
                cout << "ingrese nuevo nombre :";
                cin >> nombre;
                profesor.darnombre(nombre);
            }
            break;

            case 2:
            {
                int telefono;
                cout << "ingrese Telefono :";
                cin >> telefono;
                profesor.dartelefono(telefono);
            }
            break;

            }
        }
    }
    break;
    case 5:
    {
        int codEst;
        cout<<"Ingresar codigo"<<endl;
        cin>>codEst;
        inventarioo.consultarMulta(codEst);
        system("pause");
    }
    break;
    }
}
