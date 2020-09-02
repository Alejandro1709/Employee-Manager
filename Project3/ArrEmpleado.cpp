#include "ArrEmpleado.h"

ArrEmpleado::ArrEmpleado() {
	ce = new int;
	*ce = 0;
}

void ArrEmpleado::Insertar() {

	string nomb, ape;

	int d, m, a;

	Empleado** aux = new Empleado * [*ce];

	for (int i = 0; i < *ce; i++) {
		aux[i] = arreglo[i];
	}

	arreglo = new Empleado * [*ce + 1];

	for (int i = 0; i < *ce; i++) {
		arreglo[i] = aux[i];
	}

	cin.ignore();

	arreglo[*ce] = new Empleado();

	cout << "Ingrese su nombre : ";
	getline(cin, nomb);

	cout << "Ingrese su apellido : ";
	getline(cin, ape);

	arreglo[*ce]->cambiar_nombre(nomb);
	arreglo[*ce]->cambiar_apellido(ape);

	cout << "Ingrese el dia de nacimiento : ";
	cin >> d;

	cout << "Ingrese el mes de nacimiento : ";
	cin >> m;

	cout << "Ingrese el anio de nacimiento : ";
	cin >> a;

	if (arreglo[*ce]->retornar_fecha_nac()->fechaValida() == false) {
		cout << "Fecha de nacimiento invalida" << endl;
		return;
	}

	arreglo[*ce]->retornar_fecha_nac()->cambiar_dia(d);
	arreglo[*ce]->retornar_fecha_nac()->cambiar_mes(m);
	arreglo[*ce]->retornar_fecha_nac()->cambiar_anio(a);

	cout << "Ingrese el dia de contrato : ";
	cin >> d;

	cout << "Ingrese el mes de contrato : ";
	cin >> m;

	cout << "Ingrese el anio de contrato : ";
	cin >> a;

	if (arreglo[*ce]->retornar_fecha_cont()->fechaValida() == false) {
		cout << "Fecha de contratamiento invalida" << endl;
		return;
	}

	Fecha *fecha = new Fecha(d, m, a);

	arreglo[*ce]->cambiar_fecha_cont(fecha);

	*ce = *ce + 1;
}

void ArrEmpleado::Mostrar() {

	cout << "Los Empleados almacenados son : " << endl;

	for (int i = 0; i < *ce; i++) {

		cout << "Nombre Completo : " << arreglo[i]->retornar_nombre() << " " << arreglo[i]->retornar_apellido();
		cout << "Fecha de nacimiento : " << endl;
		cout << arreglo[i]->retornar_fecha_nac()->retornar_dia() << "\\";
		cout << arreglo[i]->retornar_fecha_nac()->retornar_mes() << "\\";
		cout << arreglo[i]->retornar_fecha_nac()->retornar_anio() << "\\";

		cout << "Fecha de Contratacion : " << endl;
		cout << arreglo[i]->retornar_fecha_cont()->retornar_dia() << "\\";
		cout << arreglo[i]->retornar_fecha_cont()->retornar_mes() << "\\";
		cout << arreglo[i]->retornar_fecha_cont()->retornar_anio() << "\\";
	}
} 

void ArrEmpleado::MostrarMes() {

	cout << "Los Meses Son : " << endl;

	for (int i = 0; i < *ce; i++) {

		cout << "Mes de nacimiento: ";
		cout << arreglo[i]->retornar_fecha_nac()->mesLetras() << "\\";

		cout << "Mes de contratacion: ";
		cout << arreglo[i]->retornar_fecha_cont()->mesLetras() << "\\";
	}
}

ArrEmpleado::~ArrEmpleado() {
	for (int i = 0; i < *ce; i++) {
		delete arreglo[i];
	}

	delete ce;
	delete[] arreglo;
}
