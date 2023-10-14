/* Rellenar un arreglo con 10 numeros y mostrar cules son pares y su direccion de memoria.Utilice Punteros */


#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int numeros[10], * dir_numerosPuntero;

	for (int i = 0; i < 10; i++) {
		cout << " Digite un numero [" << i << "]: ";
		cin >> numeros[i];
	}
	dir_numerosPuntero = numeros;

	for (int i = 0; i < 10; i++) {
		if (*dir_numerosPuntero % 2 == 0) {
			cout << "El numero : " << *dir_numerosPuntero << " El numero es PAR";
			cout << " La direccion de memoria es" << dir_numerosPuntero << endl;

		}
		dir_numerosPuntero++;
	}


	system("pause");
	return 0;
}