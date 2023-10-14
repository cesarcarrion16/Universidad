/*Realice una funcion que dada una matriz y un numero de fila,
devuelva el menor de los elementos de dicha fila*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
int menorFila(int matriz[][100], int filas, int columnas);
int matriz[100][100], filas, columnas;

int main() {

	pedirDatos();
	cout << "El menor en la fila seleccionada es: " <<
		menorFila(matriz, filas, columnas) << endl;

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Indique las filas: ";
	cin >> filas;

	cout << "Indique las columnas: ";
	cin >> columnas;

	// Rellene la matriz
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Indique numero para posicion " << "[" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
}

int menorFila(int matriz[][100], int filas, int columnas) {
	int numeroFila, menor = 99999;

	do {
		cout << "En cual fila buscar: ";
		cin >> numeroFila;
	} while (numeroFila > filas);



	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (i == numeroFila) {
				if (matriz[i][j] < menor) {
					menor = matriz[i][j];
				}
			}
		}
	}
	return menor;
}