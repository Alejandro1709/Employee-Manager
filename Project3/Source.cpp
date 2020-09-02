#include "ArrEmpleado.h"

int main() {

	ArrEmpleado* arreglo = new ArrEmpleado();

	int* opt = new int;

	while (1) {

		system("cls");

		cout << "1. Ingresar nuevo empleado" << endl;
		cout << "2. Mostrar" << endl;
		cout << "3. Mostrar mes" << endl << endl;
		cout << "Ingrese la opcion : ";
		cin >> *opt;

		if (*opt == 1) arreglo->Insertar();
		if (*opt == 2) arreglo->Mostrar();
		if (*opt == 3) arreglo->MostrarMes();

		cout << endl;
		system("pause");
	}

	delete opt, arreglo;
}