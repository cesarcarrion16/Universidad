include<iostream>
#include<stdlib.h>
using namespace std;

struct Persona {
	char nombre[20];
	int edad;
}Persona1;

int main() {

	cout << "Digite su nombre:";
	cin.getline(Persona1.nombre, 20, '\n');
	cout << "Digite su edad: ";
	cin >> Persona1.edad;


	cout << " Mostrando los datos" << endl;
	cout << "Nombre: " << Persona1.nombre << endl;
	cout << "Edad:" << Persona1.edad;

	system("pause");
	return 0;
}