/*Pedir el nombre al usuario y devolcer el numero de vocales que hay.
Utilice punteros y funciones*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// prototipos de funciones
void pedirDatos();
int contarVocales(char*);
char nombre[20];

int main() {

	pedirDatos();
	cout << "\nEl total de vocales es: " << contarVocales(nombre) << endl;

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Ingrese nombre: ";
	cin.getline(nombre, 20, '\n');
	_strupr_s(nombre);
}

int contarVocales(char* nombre) {
	int contador = 0;

	while (*nombre) {
		switch (*nombre) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			contador++;
		}
		nombre++;
	}
	return contador;
}