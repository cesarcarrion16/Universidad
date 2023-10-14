/*Hacer 2 estructuras una llamada promedio que tendra los siguientes campos
nota1,nota2,nota3 y otro llamada alumno que tendra los siguientes campos
nombre,sexo, edad. Hacer que la estructura promedio este anidada a la estructura
alumno.Pedir lod datos para n cant de alumnos.Calcular el promedio y por ultimo
mostrar la información incluyendo el promedio*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Promedio {
	float nota1, nota2, nota3;
};

struct Alumno {
	char nombre[20];
	char sexo[20];
	int edad;
	struct Promedio prom;
}alumnos[100];

int main() {
	int n;
	float promedio_Alumno;

	cout << "Digite la cantidad de alumnos:";
	cin >> n;

	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		cout << " Nombre del alumno: "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout << "Digite el sexo del alumno: "; cin.getline(alumnos[i].sexo, 20, '\n');
		cout << "Digite la edad del alumno: "; cin >> alumnos[i].edad;
		cout << "Digitar la nota 1 :"; cin >> alumnos[i].prom.nota1;
		cout << "Digite la nota 2: "; cin >> alumnos[i].prom.nota2;
		cout << "Digite la nota 3: "; cin >> alumnos[i].prom.nota3;


	}
	for (int i = 0; i < n; i++) {

		promedio_Alumno = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

		cout << " MOSTRANDO LA INFORMACIÓN : \n";
		cout << "Nombre: " << alumnos[i].nombre << endl;
		cout << "Sexo: " << alumnos[i].sexo << endl;
		cout << "Edad: " << alumnos[i].edad << endl;
		cout << "Promedio: " << promedio_Alumno << endl;

	}




	system("pause");
	return 0;
}