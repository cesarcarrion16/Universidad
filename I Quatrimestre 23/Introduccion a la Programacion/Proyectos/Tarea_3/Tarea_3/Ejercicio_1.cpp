/* 1.Desarrolle un programa en C++ que permita ingresar y almacenar las notas de todos los
alumnos del curso de Introducción a la Programación.Mostrar las notas ingresadas y la
cantidad de estudiantes que tienen una nota mayor al promedio.*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int cantidad_alumnos, cont = 0, cantidad_alumnos_sobre_promedio = 0, suma_notas = 0;
	float notas[100], promedio;

	cout << "Ingrese la cantidad de alumnos a evaluar: ";
	cin >> cantidad_alumnos;

	//solicita la nota
	for (int i = 0; i < cantidad_alumnos; i++)
	{
		cout << i + 1 << " Ingrese la nota del alumno: \n";
		cin >> notas[i];
	}
	cout << "\n";

	//muestra los datos
	for (int i = 0; i < cantidad_alumnos; i++) {
		cout << " " << notas[i] << "\n";
	}
	cout << "\n";


	// Saca cuantos alumnos son mayor al promedio

	// Sumar las notas totales
	for (int i = 0; i < cantidad_alumnos; i++) {
		suma_notas = notas[i]++;
	}

	promedio = suma_notas / cantidad_alumnos;
	// Determinar la cantidad de alumnos que estan por encima del promedio
	for (int i = 0; i < cantidad_alumnos; i++)
	{
		if (notas[i]>promedio)
		{
			cantidad_alumnos_sobre_promedio++;
		}
	}

	cout << " El promedio de : " << promedio << endl;
	cout << " La cantidad de alumnos sobre el promedio es : " << cantidad_alumnos_sobre_promedio << endl;

	system("pause");
	return 0;
}
