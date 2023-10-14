/*Hacer 2 estructuras una llamada Salario que tendrá los siguientes campos:bruto, extras, deducciones;
y otra llamada Empleado que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura salario este anidada en la estructura Empleado,
luego pedir todos los datos para un Empleado, luego calcular su salario neto, y por último imprimir todos sus datos incluidos el salario neto.*/


#include<iostream>
#include<stdlib.h>
using namespace std;

struct salario {
	int bruto;
	int extras;
	int deducciones;
	int neto;
};
struct Empleado {
	char nombre[20];
	char sexo[20];
	int edad;
	struct salario info_salario;
}empleado[1];


int main() {
	for (int i = 0; i < 1; i++) {
		cout << "Digite el nombre del empleado: ";
		cin.getline(empleado[i].nombre, 20, '\n');
		cout << "Digite el sexo del empleado: ";
		cin.getline(empleado[i].sexo, 20, '\n');
		cout << "Digite la edad del empleado: ";
		cin >> empleado[i].edad;
		cout << "Digite el monto del salario bruto: ";
		cin >> empleado[i].info_salario.bruto;
		cout << "Digite el monto del las horas extras: ";
		cin >> empleado[i].info_salario.extras;
		cout << "Digite el monto de las deducciones: ";
		cin >> empleado[i].info_salario.deducciones;

		//sacar el salario neto
		empleado[i].info_salario.neto = empleado[i].info_salario.bruto - empleado[i].info_salario.deducciones + empleado[i].info_salario.extras;

	}
	cout << '\n';
	//mostrando los datos

	for (int i = 0; i < 1; i++) {
		cout << "Nombre: " << empleado[i].nombre << endl;
		cout << "Sexo: " << empleado[i].sexo << endl;
		cout << "Edad: " << empleado[i].edad<< endl;
		cout << "Salario Bruto: " << empleado[i].info_salario.bruto << endl;
		cout << "Monto de las horas extras: " << empleado[i].info_salario.extras << endl;
		cout << "Monto de las deducciones: " << empleado[i].info_salario.deducciones << endl;
		cout << "Salario Neto: " << empleado[i].info_salario.neto<<endl;
	}

	system("pause");
	return 0;
}