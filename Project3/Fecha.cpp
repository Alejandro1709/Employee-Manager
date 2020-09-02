#include "Fecha.h"

Fecha::Fecha() {
	dia = mes = anio = 0;
}

Fecha::Fecha(int pdia, int pmes, int panio) {
	dia = pdia;
	mes = pmes;
	anio = panio;
}

int Fecha::retornar_dia() { return dia; }
int Fecha::retornar_mes() { return mes; }
int Fecha::retornar_anio() { return anio; }
string Fecha::mesLetras() {
	if (mes == 1) return "Enero";
	if (mes == 2) return "Febrero";
	if (mes == 3) return "Marzo";
	if (mes == 4) return "Abril";
	if (mes == 5) return "Mayo";
	if (mes == 6) return "Junio";
	if (mes == 7) return "Julio";
	if (mes == 8) return "Agosto";
	if (mes == 9) return "Septiembre";
	if (mes == 10) return "Octubre";
	if (mes == 11) return "Noviembre";
	if (mes == 12) return "Diciembre";
}

bool Fecha::fechaValida() {
	if (dia <= 0 || dia > 31 && mes <= 0 || mes > 12 && anio <= 1900 || anio > 2020) {
		return false;
	}
	else { return true; }
}

void Fecha::cambiar_dia(int nuevo) { dia = nuevo; }
void Fecha::cambiar_mes(int nuevo) { mes = nuevo; }
void Fecha::cambiar_anio(int nuevo) { anio = nuevo; }
Fecha::~Fecha() {}