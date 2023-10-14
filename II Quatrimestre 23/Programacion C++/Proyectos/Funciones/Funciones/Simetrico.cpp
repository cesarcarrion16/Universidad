/* Desarrollar una función que determine si una matriz es simetrica o no*/

// Cuadrada

// traspuesta ij==ji


#include<iostream>

#include<stdlib.h>

using namespace std;


void pedirDatos();
void simetria(int m[][100], int filas, int colum);
int nfilas, ncolum, matriz[100][100];


int main() {

	pedirDatos();
	simetria(matriz, nfilas, ncolum);

	system("pause");
	return 0;
}

void pedirDatos() {

	cout << " Digite el numero de filas:";

	cin >> nfilas;

	cout << " Digite el numero de columnas:";

	cin >> ncolum;

	//rellenar la matriz

	for (int i = 0; i < nfilas; i++) {

		for (int j = 0; j < ncolum; j++) {

			cout << "Digite un numero en [" << i << "][" << j << "]:";

			cin >> matriz[i][j];
		}
	}
}

void simetria(int m[][100], int filas, int colum) {

	int cont = 0;

	if (nfilas == ncolum) {//si es cuadrada

		//ij==ji

		for (int i = 0; i < nfilas; i++) {

			for (int j = 0; j < ncolum; j++) {

				if (matriz[i][j] == matriz[j][i]) {

					cont++;

				}

			}

		}

	}

	if (cont == nfilas * ncolum) {

		cout << " La matriz es SIMETRICA";

	}

	else {

		cout << "La matriz no es SIMETRICA";
	}
}