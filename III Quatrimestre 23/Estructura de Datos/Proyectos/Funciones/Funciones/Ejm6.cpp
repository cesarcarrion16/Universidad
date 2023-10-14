/*Rellen un arreglo con N cantidad de numeros y utilizando punteros
determine el elemento menor del arreglo*/


#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
	int n, numeros[100], menor = 999999, * dir_numeros;
	cout << " Digite la cantidad de elementos del arreglo \n";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " Digite un numero: ";
		cin >> numeros[i];
	}
	dir_numeros = numeros; //igualamos la direccion de memoria


	for (int i = 0; i < n; i++) {
		if (*dir_numeros < menor) {
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	cout << "El elemento menor del arreglo es: " << menor << endl;



	system("pause");
	return 0;
}