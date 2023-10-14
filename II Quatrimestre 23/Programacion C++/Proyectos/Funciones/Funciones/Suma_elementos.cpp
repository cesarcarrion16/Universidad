/* Realice una función que tome como parametros un vector
de numeros enteros y devuelva la suma de sus elementos*/

#include<iostream>
#include<stdlib.h>
using namespace std;

//Prototipos de funcion

void pedirDatos();
int calcularSuma(int vec[], int tam);
int vector[100], tam;

int main() {

	pedirDatos();
	cout << "La suma del vector es: " << calcularSuma(vector, tam) << endl;

	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Digite el numero de elementos del vector:";
	cin >> tam;

	for (int i = 0; i < tam; i++) {
		cout << i + 1 << " Digite un numero: ";
		cin >> vector[i];
	}
}
int calcularSuma(int vec[], int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++) {
		suma += vector[i];
	}
	return suma;
}