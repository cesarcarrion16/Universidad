/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados 
de la empresa y que imprima los datos del empleado con mayor y menor salario.*/
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

struct empleados{
	char nombre[20];
	long salario;
}empleados[100];


int main() {
	int n, salario_mayor=0, salario_menor=9999999,posicionM=0,posicionm=0;

	cout << "Digite la cantidad de empleados: ";
	cin >> n;
	cout << "\n";

	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		cout << "Digite el nombre del empleado: ";
		cin.getline(empleados[i].nombre, 20, '\n');
		cout << "Digite su salario: ";
		cin >> empleados[i].salario;
		cout << "\n";
		//Determina salario mayor
		if (empleados[i].salario > salario_mayor) {
			salario_mayor = empleados[i].salario;
			posicionM = i;
		}

		//Determina salario menor
		if (empleados[i].salario < salario_menor) {
			salario_menor = empleados[i].salario;
			posicionm = i;
		}
	}
	//Mostrar datos
	cout << "El empleado con el salario mayor es: "<<endl;
	cout << "  Nombre: " << empleados[posicionM].nombre << endl;
	cout << "  Salario: " << empleados[posicionM].salario << endl;
	cout << "\n";
	cout << "El empleado con el salario menor es: " << endl;
	cout << "  Nombre: " << empleados[posicionm].nombre << endl;
	cout << "  Salario: " << empleados[posicionm].salario << endl;
	
	
	system("pause");
	return 0;
}*/