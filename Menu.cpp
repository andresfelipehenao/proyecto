#include "Menu.h"

int main()
{
    Inventario inventario = inventario();
    int opc;

    do
    {
        system("cls");
        cout<<"******************************"<<endl;
        cout<<"********  laboratorio ********"<<endl;
        cout<<"******************************"<<endl;
        cout<<endl;
        cout << "selecione una opcion" << endl;
        cout << "1 Laboratorio" << endl;
        cout << "2 Usuario" << endl;
        cout << "0 salir" << endl;
        cout << "--> ";
        cin >> opc;
        switch (opc)
        {
        case 1:
        {
            int codigo;
            system("cls");
            cout<<"******************************"<<endl;
            cout<<"********  laboratorio ********"<<endl;
            cout<<"******************************"<<endl;
            cout<<endl;
            cout << "selecione una opcion" << endl;
            cout << "1 registar articulo computo" << endl;
            cout << "2 registar articulo de muebles" << endl;
            cout << "3 registar articulo de prestamos" << endl;
            cout << "4 modificar articulo computo" << endl;
            cout << "5 modificar articulo de muebles" << endl;
            cout << "6 modificar articulo de prestamos" << endl;
            cout << "7 prestamo de articulo de computo" << endl;
            cout << "8 prestamos de articulos de muebles" << endl;
            cout << "9 prestamo de articulos de prestamos " << endl;
            cout << "10 devolver articulos de computo " << endl;
            cout << "11 devolver articulos de muebles" << endl;
            cout << "12 devolver articulos de prestamos" << endl;
            cout << "0 salir" << endl;
            cout << "--> ";
            cin >> codigo;
            switch (codigo)
            {
            case 1:
            {
                int identificador;
                cout << "ingrese identificador articulo" ;
                cin >> identificador;

                bool estado;
                cout << "ingrese estado de articulo";
                cin >> estado;

                string nombre;
                cout << "ingrese nombre del articulo";
                cin >> nombre;

                int valor;
                cout << "ingrese valor del articulo";
                cin >> valor;

                int codProfesor;
                cout << "ingrese codigo del profesor";
                cin >> codProfesor;

                Profesor profesor = inevnatario.obtenerprofesor(codProfesor);

                int fechaPrestamo;
                cout << "ingrese fecha de prestamo";
                cin >> fechaPrestamo;

                int codEstudiante;
                cout << "ingrese codigo de estudiante";
                cin >> codEstudiante;

                Estudiante estudiante = inventario.obtenerestudiante(codEstudiante);

                int fechaDevolucion;
                cout << "ingrese fecha de devolucion";
                cin >> fechaDevolucion;

                Articulo articulo = Articulo(identificador, estado, nombre, valor, profesor, fechaPrestamo, estudiante, fechaDevolucion);

                inventario.dararticulo(articulo);
            }
            break;
            case 2:
            {
                int identificador;
                cout << "ingrese identificador articulo" ;
                cin >> identificador;

                bool estado;
                cout << "ingrese estado de articulo";
                cin >> estado;

                string nombre;
                cout << "ingrese nombre del articulo";
                cin >> nombre;

                int valor;
                cout << "ingrese valor del articulo";
                cin >> valor;

                int codProfesor;
                cout << "ingrese codigo del profesor";
                cin >> codProfesor;

                Profesor profesor = inevnatario.obtenerprofesor(codProfesor);

                int fechaPrestamo;
                cout << "ingrese fecha de prestamo";
                cin >> fechaPrestamo;

                int codEstudiante;
                cout << "ingrese codigo de estudiante";
                cin >> codEstudiante;

                Estudiante estudiante = inventario.obtenerestudiante(codEstudiante);

                int fechaDevolucion;
                cout << "ingrese fecha de devolucion";
                cin >> fechaDevolucion;

                Articulo articulo = Articulo(identificador, estado, nombre, valor, profesor, fechaPrestamo, estudiante, fechaDevolucion);

                inventario.dararticulo(articulo);
            }
            break;
            case 3:
            {
                int identificador;
                cout << "ingrese identificador articulo" ;
                cin >> identificador;

                bool estado;
                cout << "ingrese estado de articulo";
                cin >> estado;

                string nombre;
                cout << "ingrese nombre del articulo";
                cin >> nombre;

                int valor;
                cout << "ingrese valor del articulo";
                cin >> valor;

                int codProfesor;
                cout << "ingrese codigo del profesor";
                cin >> codProfesor;

                Profesor profesor = inevnatario.obtenerprofesor(codProfesor);

                int fechaPrestamo;
                cout << "ingrese fecha de prestamo";
                cin >> fechaPrestamo;

                int codEstudiante;
                cout << "ingrese codigo de estudiante";
                cin >> codEstudiante;

                Estudiante estudiante = inventario.obtenerestudiante(codEstudiante);

                int fechaDevolucion;
                cout << "ingrese fecha de devolucion";
                cin >> fechaDevolucion;

                Articulo articulo = Articulo(identificador, estado, nombre, valor, profesor, fechaPrestamo, estudiante, fechaDevolucion);

                inventario.dararticulo(articulo);
            }
            break;
            case 4:
                {
                    Articulo articulo = inventario.consultararticulo(identificador);
                    int opci;
                    cout << " 1 modificar nombre";
                    cout << " 2 modificar estado";
                    cout << " 3 modificar identificador";
                    cout << " 4 modificar estado";
                    cout << " 5 modificar valor";
                    cout << " 6 modificar fecha de prestamo";
                    cout << " 7 modificar fecha de devolucion";

                    switch(opci){
                    case 1:{

                        string nombre;
                        cout << "ingrese nombre articulo";
                        cin>> nombre;
                        articulo.darnombre(nombre);
                        inventario.dararticulo(articulo);
                    }
                    break;
                    }

                }
                break;
            }
        }
        break;
        case 2:
        {
            int codigo;
            system("cls");
            cout<<"******************************"<<endl;
            cout<<"********  laboratorio ********"<<endl;
            cout<<"******************************"<<endl;
            cout<<endl;
            cout << "selecione una opcion" << endl;
            cout << "1 registar profesor" << endl;
            cout << "2 registar estudiante" << endl;
            cout << "3 modificar profesor" << endl;
            cout << "4 modificar estudiante" << endl;
            cout << "5 articulo asignado a profesor" << endl;
            cout << "6 consultar datos profesor " << endl;
            cout << "7 consultar datos estudiante " << endl;
            cout << "0 salir" << endl;
            cout << "--> ";
            cin >> codigo;
            switch (codigo)
            {
            case 1:
            {
            }
            break;
            }
        }


        break;
        }
    }
    while (opc != 0);


    return 0;
}
