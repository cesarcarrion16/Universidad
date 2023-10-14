/* Hacer un programa que solicite al usuario la cantidad de filas y
columnas de una matriz, rellenar la matriz y mostra la matriz resultante*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int matriz[100][100], filas, colum;

	cout << " Digite el numero de filas\n";
	cin >> filas;
	cout << " Digite el numero de columnas\n";
	cin >> colum;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < colum; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> matriz[i][j];
		}
	}

	cout << " Mostrando la matriz\n";

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < colum; j++) {
			cout << matriz[i][j] << "   ";
		}
		cout << "\n";
	}



	system("pause");
	return 0;

}