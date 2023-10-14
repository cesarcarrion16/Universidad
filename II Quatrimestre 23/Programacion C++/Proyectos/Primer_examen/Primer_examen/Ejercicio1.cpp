/*Realice un programa donde se solicite al usuario los datos para cargar una matriz de 3x4, una vez cargados deberán determinar lo siguiente:

-Mostrar la matriz

-Promedio general de los números ingresados

-Porcentaje de números positivos. (Deberán ingresar números negativos a la matriz)

-Sumatoria de números pares ingresados a la matriz.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

	int matriz[3][4], sumar_pares = 0, negativo = 0;
	float Promedio_general, porcentaje_positivos = 0, sumar_promedio = 0, positivos = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> matriz[i][j];

			/* Promedio general de los números ingresados */

			sumar_promedio = sumar_promedio + matriz[i][j];

			/*Porcentaje de números positivos. (Deberán ingresar números negativos a la matriz)*/
			if (matriz[i][j] >= 0) {
				positivos++;
			}


			/*Sumatoria de números pares ingresados a la matriz*/
			if (matriz[i][j] % 2 == 0) {
				sumar_pares = sumar_pares + matriz[i][j];
			}

		}
	}
	Promedio_general = sumar_promedio / 12;
	porcentaje_positivos = (positivos / 12) * 100;

	/*Mostrar Matriz*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matriz[i][j] << "   ";
		}
		cout << "\n";
	}

	cout << "El promedio general es de: " << Promedio_general << endl;
	cout << "El porcentaje de numeros positivos es: " << porcentaje_positivos << "%" << endl;
	cout << "La suma de los numeros pares es: " << sumar_pares << endl;


	system("pause");
	return 0;

}