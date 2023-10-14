/* Realice una funcion que dada una matriz y un numero de fila de la

matriz devuelve el menor de los elementos almacenados en dicha fila*/



#include<iostream>

#include<stdlib.h>

using namespace std;



void pedirDatos();

int comprobarMenor(int m[][100], int filas, int colum);

int matriz[100][100], nfilas, ncolum;



int main() {



	pedirDatos();

	cout << "El elemento menor de la fila seleccionada es:" << comprobarMenor(matriz, nfilas, ncolum);



	system("pause");

	return 0;

}

void pedirDatos() {

	cout << "Digite el numero de filas:";

	cin >> nfilas;

	cout << "Digite el numero de columnas:";

	cin >> ncolum;

	for (int i = 0; i < nfilas; i++) {

		for (int j = 0; j < ncolum; j++) {

			cout << "Digite un numero en [" << i << "][" << j << "]:";

			cin >> matriz[i][j];

		}

	}

}

int comprobarMenor(int m[][100], int filas, int colum) {

	int fila, menor = 999999;

	cout << "Digite el numero de fila a evaluar";

	cin >> fila;

	for (int i = 0; i < nfilas; i++) {

		for (int j = 0; j < ncolum; j++) {

			if (i == fila) {

				if (matriz[i][j] < menor) {

					menor = matriz[i][j];

				}

			}

		}

	}

	return menor;

}