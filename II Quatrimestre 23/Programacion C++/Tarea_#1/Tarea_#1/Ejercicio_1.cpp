/*Escriba un programa que rellene una matriz de 5x4, y calcule el 45% del total de los elementos ingresados*/



#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int matriz[5][4], suma = 0;
	float porcentaje;


	/*solicita los numeros*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> matriz[i][j];
		}
	}
	/*Muestra los datos*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matriz[i][j] << "   ";
		}
		cout << "\n";
	}
	cout << "\n";
	/*Suma los datos y saca porcentaje*/
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			suma = suma + matriz[i][j];
			porcentaje = suma * 0.45;
		}
	}

	cout << "La suma de los elementos es: " << suma << endl;
	cout << "El porcentaje de los elementos es: " << porcentaje << "%" << endl;




	system("pause");
	return 0;

}
