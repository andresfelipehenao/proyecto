#pragma once
#include "usuario.h"

using namespace std;



usuario::usuario(){
}
usuario::~usuario(){

}


void usuario::daridentificador(int identificador){
this->identificador=identificador;
}


int usuario ::obteneridentificador(){
return identificador;
}



void usuario::darnombre(string nombre){
this->nombre=nombre;

}
string usuario::obtenernombre(){
	return nombre;
}

void usuario::darcodigo(int codigo){
this->codigo=codigo;

}

int usuario::obtenercodigo(){
	return codigo;
}

void usuario::dartelefono(int telefono){
this->telefono=telefono;
}
int usuario::obtenertelefono (){
	return telefono;
}
