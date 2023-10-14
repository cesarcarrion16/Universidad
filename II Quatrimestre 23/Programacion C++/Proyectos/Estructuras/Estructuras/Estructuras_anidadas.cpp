#include<iostream>
#include<stdlib.h>
using namespace std;

struct info_direccion {
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};
struct Empleado {
	char nombre[20];
	float salario;
	struct info_direccion dir_direccion;
}empleados[3];

int main() {
	for (int i = 0; i < 3; i++) {
		cout << " Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << " Digite su salario: ";
		cin >> empleados[i].salario;
		cout << "Digite su direccion: ";
		cin.getline(empleados[i].dir_direccion.direccion, 20, '\n');
		cout << "Digite su ciudad: ";
		cin.getline(empleados[i].dir_direccion.ciudad, 20, '\n');
		cout << "Digite su provincia: ";
		cin.getline(empleados[i].dir_direccion.provincia, 20, '\n');

	}
	cout << '\n';
	//mostrando los datos
	for (int i = 0; i < 3; i++) {
		cout << " Nombre: " << empleados[i].nombre << endl;
		cout << "Salario: " << empleados[i].salario << endl;
		cout << "Direccion. " << empleados[i].dir_direccion.direccion << endl;
		cout << "Ciudad: " << empleados[i].dir_direccion.ciudad << endl;
		cout << "Provincia: " << empleados[i].dir_direccion.provincia << endl;
	}

	system("pause");
	return 0;
}