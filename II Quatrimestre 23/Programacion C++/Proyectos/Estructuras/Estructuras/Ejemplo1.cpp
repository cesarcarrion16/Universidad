#include<iostream>
#include<stdlib.h>
using namespace std;

struct Persona {
	char nombre[20];
	int edad;
}Persona1 = { "Alberto",25 }, Persona2 = { "Eduardo",21 };

int main() {

	cout << "Nombre 1: " << Persona1.nombre << endl;
	cout << " Eda 1: " << Persona1.edad << endl;


	system("pause");
	return 0;
}