/*Determinar si un numero ingresado por el usuario es primo.
Indicar la direccion de memoria del mismo. Utilice punteros*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int num, * dir_num, contador = 0;
	cout << "Ingrese un numero: ";
	cin >> num;

	dir_num = &num;

	//Determinar cuantas veces un numero es divisible de 1 a n.
	for (int i = 1; i <= *dir_num; i++) {
		if (*dir_num % i == 0) {
			contador++;
		}
	}

	//Evaluar el contador, para todo numero que contador = 2 es primo
	if (contador > 2) {
		cout << "El numero " << *dir_num << " no es primo.\n";
	}
	else {
		cout << "El numero " << *dir_num << " es primo. \n" <<
			"La direccion de memoria del numero es: " << dir_num << endl;
	}

	system("pause");
	return 0;
}