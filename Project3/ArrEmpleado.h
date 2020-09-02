#pragma once
#include "Empleado.h"

class ArrEmpleado {
private:
	Empleado** arreglo;
	int* ce;
public:
	ArrEmpleado();
	void Insertar();
	void Mostrar();
	void MostrarMes();
	void ValidarFecha();
	~ArrEmpleado();
};

