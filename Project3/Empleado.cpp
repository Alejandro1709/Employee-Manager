#include "Empleado.h"

Empleado::Empleado() {
	fecha_nac = new Fecha();
	fecha_cont = new Fecha();
}

string Empleado::retornar_nombre() { return nombre; }
string Empleado::retornar_apellido() { return apellido; }
Fecha* Empleado::retornar_fecha_nac() { return fecha_nac; }
Fecha* Empleado::retornar_fecha_cont() { return fecha_cont; }
void Empleado::cambiar_nombre(string nuevo) { nombre = nuevo; }
void Empleado::cambiar_apellido(string nuevo) { apellido = nuevo; }
void Empleado::cambiar_fecha_nac(Fecha* nuevo) { fecha_nac = nuevo; }
void Empleado::cambiar_fecha_cont(Fecha* nuevo) { fecha_cont = nuevo; }
void Empleado::mostrar_un_empleado() {

}
Empleado::~Empleado() {}