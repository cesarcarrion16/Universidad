/*Realice un programa que permita ingresar el nombre de los socios de un club. Mostrar la longitud de cada nombre y utilice un vector llamado Nombres[]*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//leer cadena de caracteres.
using namespace std;

// si es una letra se utiliza char y si es de 2 letras en adelante se una str

int main() {
	int n;
	string nombres[100];

	cout << "Ingrese el numero de socios: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Ingrese el nombre del socio " << i + 1 << " : ";
		cin >> nombres[i];
	}
	//mostrar la longitud de los nombres
	for (int i = 0; i < n; i++) {
		cout << "\n Nombre: " << nombres[i];
		cout << "\n Longitud: " << nombres[i].length(1); //length() es longitud y evalua cuantos caracteres hay.

	}
	cout << "\n";

	system("pause");
	return 0;
}