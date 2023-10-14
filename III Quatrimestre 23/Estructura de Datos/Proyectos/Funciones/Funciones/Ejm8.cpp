/*Hacer una estructura llamada Alumno con los siguientes campos:
nombres, edad, promedio. Pedir al usuario los datos para 3 alumnos,
comprobar cual de los 3 tiene el mejor promedio  y mostrar sus datos.
Utilizar punteros a la estructura.
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Alumno {
	char nombre[20];
	int edad;
	float promedio;
}alumno[3], * puntero_alumno = alumno;

// prototipos de funciones
void pedirDatos();
void mejorPromedio(Alumno*);


int main() {

	pedirDatos();
	mejorPromedio(puntero_alumno);

	system("pause");
	return 0;
}

void pedirDatos() {
	for (int i = 0; i < 3; i++) {

		cout << "Nombre: ";
		cin.getline((puntero_alumno + i)->nombre, 20, '\n');
		cout << "Edad: ";
		cin >> (puntero_alumno + i)->edad;
		cout << "Promedio: ";
		cin >> (puntero_alumno + i)->promedio;
		cout << "\n";

		while (getchar() != '\n');
	}
}

void mejorPromedio(Alumno* puntero_alumno) {
	float mayor = 0.0;
	int indice = 0;

	for (int i = 0; i < 3; i++) {
		if ((puntero_alumno + i)->promedio > mayor) {
			mayor = (puntero_alumno + i)->promedio;
			indice = i;
		}
	}
	cout << "Alumno con mejor promedio" << endl
		<< "Nombre: " << (puntero_alumno + indice)->nombre << endl
		<< "Edad: " << (puntero_alumno + indice)->edad << endl
		<< "Promedio: " << (puntero_alumno + indice)->promedio << endl;
}