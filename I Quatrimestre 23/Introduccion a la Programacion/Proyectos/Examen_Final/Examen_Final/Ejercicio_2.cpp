/*2. Desarrolle un programa en C++ que permita ingresar y almacenar los códigos de todos los socios de un club.
Considerar que el código debe tener 4 dígitos. Mostrar el código y el primer digito del código de todos los socios del club.*/


#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() {
	int empleados;
	string codigos[100];
	char inicio_vector[100];



	cout << " Ingrese el numero de empleados: ";
	cin >> empleados;

	for (int i = 0; i < empleados; i++) {

		do {
			cout << " Ingrese el codigo del empleado " << (i + 1) << ":";
			cin >> codigos[i];
			if (codigos[i].length() != 4) {
				cout << "Codigo debe contener mas de 4 digitos... ERROR!!!!\n";
			}
		} while (codigos[i].length() != 4);
		inicio_vector[i] = codigos[i].at(0);
		
	;

	}cout << "\n";

	//mostrando los codigos
	for (int i = 0; i < empleados; i++) {
		cout << "Codigo del empleado " << i + 1 << ":" << codigos[i] << endl;
	}
	cout << "\n";
	//calcular los codigos de 2 digitos
	for (int i = 0; i < empleados; i++) {
		cout << "El primer digito del codigo es: " << inicio_vector[i] << endl;
	}

	system("pause");
	return 0;
}