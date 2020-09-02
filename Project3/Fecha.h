#pragma once
#include <string>
#include <iostream>
 
using namespace std;

class Fecha {
private:
	int dia, mes, anio;
	string mess;
public:
	Fecha();
	Fecha(int pdia, int pmes, int panio);
	int retornar_dia();
	int retornar_mes();
	int retornar_anio();
	string mesLetras();
	bool fechaValida();
	void cambiar_dia(int nuevo);
	void cambiar_mes(int nuevo);
	void cambiar_anio(int nuevo);
	~Fecha();
};

