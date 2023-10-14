/*Desarrolle un programa que permita almacenar la codigos de los empleados de una empresa. adicionalmente se muestre la cantidad de codigos que tienen solo 2 numeros*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int n, codigos[100], contador = 0;

	cout << " Ingrese el numero de empleados: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		do {
			cout << " Ingrese el codigo del empleado " << (i + 1) << ":";
			cin >> codigos[i];
			if (codigos[i] <= 0) {
				cout << "Codigo debe ser mayor que cero... ERROR!!!!\n";
			}
		
		} while (codigos[i] <= 0);
	}
	cout << "\n";

	//mostrando los codigos
	for (int i = 0; i < n; i++) {
		cout << "Codigo del empleado " << i + 1 << ":" << codigos[i] << endl;
	}
	cout << "\n";
	//calcular los codigos de 2 digitos
	for (int i = 0; i < n; i++) {
		if (codigos[i] > 9 && codigos[i] < 100) {
			contador++;
		}
	
	}
	cout << "La cantidad de codigos de 2 digitos es: " << contador << endl;

	system("pause");
	return 0;
}