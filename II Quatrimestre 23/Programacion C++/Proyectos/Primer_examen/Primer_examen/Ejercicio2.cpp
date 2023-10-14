/*Programa que permita llenar una matriz 4x4, muestre en pantalla SI el numero ingresado es un número es par o impar , y mostrar la matriz resultante.*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

	int matriz1[4][4], par[4][4], impar[4][4];


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> matriz1[i][j];


		}
	}
	cout << "\n";

	/*Determina si es par o impar*/
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (matriz1[i][j] % 2 == 0) {
				par[i][j] = matriz1[i][j];
				cout << par[i][j] << " es un numero par" << endl;
			}
			else {
				impar[i][j] = matriz1[i][j];
				cout << impar[i][j] << " es un numero impar" << endl;
			}

		}
	}
	cout << "\n";


	/*Mostrar Matriz*/
	cout << "La matriz resultante es: \n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matriz1[i][j] << "   ";
		}
		cout << "\n";
	}
	cout << "\n";

	system("pause");
	return 0;

}