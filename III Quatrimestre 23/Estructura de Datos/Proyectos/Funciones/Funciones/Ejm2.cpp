/* Identifique si un numero es par utilizando punteros */
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int num, * dir_num;
	cout << "Digite un numero: ";
	cin >> num;

	dir_num = &num;

	if (*dir_num % 2 == 0) {
		cout << *dir_num << " es numero par.\n" <<
			"La direccion de memoria del puntero es: " << dir_num << endl;
	}

	else {
		cout << *dir_num << " es numero impar.\n" <<
			"La direccion de memoria del puntero es: " << dir_num << endl;
	}

	system("pause");
	return 0;
}