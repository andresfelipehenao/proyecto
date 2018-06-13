
#include "Profesor.h"
#include "Estudiante.h"
#include "usuario.h"
#include "multa.h"

using namespace std;


Articulo::Articulo()
{
}

Articulo::Articulo(int identificador, bool estado, string nombre, int valor, Profesor profesor,
             int fechaprestamo, Estudiante estudiante, int fechaDevolucion);

    this->identificador= identificador;
    this->estado = estado;
    this->nombre = nombre;
    this->valor = valor;
    this->profesor = profesor;
    this->fechaPrestano = fechaPrestamo;
    this->estudiante = estudiante;
    this->fechaDevolucion = fechaDevolucion;


  void Articulo::daridentificador(int identificador){
    this->identificador= identificador;
  }

  int obteneridentificador(){
    return identificador;
  }
  void Articulo::darestado(bool estado){
  this->estado = estado;
  }
  bool obtenerestado(){
  return estado;
  }

  void Articulo::darnombre (string nombre){
  }
  string obtenernombre(){
  return nombre;
  }

  void Articulo::darvalor (int valor){

  }
  int obtenervalor(){
  return valor;
  }

  void Profesor::darprofesor (Profesor profesor){
      this->profesor = profesor;
  }
  Profesor obtenerprofesor(){
  return profesor;
  }

  void Articulo::darfechaprestamo (int fechaprestamo){
   this->fechaPrestano = fechaPrestamo;
  }
  int obtenerfechaprestamo(){
  return fechaprestamo;
  }
  Estudiante::darestudiante (Estudiante estudiante){
  this->estudiante = estudiante;
  }
  Estudiante obtenerestudiante(){
  return estudiante;
  }

  void Articulo::darfechadevolucion (int fechadevolucion){
    this->fechaDevolucion = fechaDevolucion;
  }
  int obtenerfechadevolucion(){

  return fechadevolucion;

  }

  void Articulo::depreciarmuebles (int identificadorTiempo){
      if el valor es mayor identificador de tiempo deje inactivo el identificador
  }
  void Articulo::depreciarcomputo (int identificadorTiempo){
  }
  void Articulo::depreciarprestamos (int identificadorTiempo){
  }

