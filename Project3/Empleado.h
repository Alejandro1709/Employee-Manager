#pragma once
#include "Fecha.h"
#include <string>
#include <iostream>

using namespace std;

class Empleado {
private:
	string nombre, apellido;
	Fecha* fecha_nac;
	Fecha* fecha_cont;
public:
	Empleado();
	string retornar_nombre();
	string retornar_apellido();
	Fecha* retornar_fecha_nac();
	Fecha* retornar_fecha_cont();
	void cambiar_nombre(string nuevo);
	void cambiar_apellido(string nuevo);
	void cambiar_fecha_nac(Fecha* nuevo);
	void cambiar_fecha_cont(Fecha* nuevo);
	void mostrar_un_empleado();
	~Empleado();

};

