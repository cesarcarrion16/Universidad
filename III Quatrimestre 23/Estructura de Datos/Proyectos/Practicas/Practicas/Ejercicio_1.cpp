/*Realiza una funci�n que tome como par�metros un vector de n�meros enteros y su
tama�o e imprima un vector con los elementos impares del vector recibido.*/

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void impares(int vec[], int);
int vector[100], impar[100], tam;

int main() {

	pedirDatos();
	impares(vector, tam);

	system("pause");
	return 0;
}



void pedirDatos() {
	cout << "Digite el numero de elementos: ";
	cin >> tam;
	cout << "\n";

	for (int i = 0; i < tam; i++) {
		cout << i + 1 << " Digite un numero: ";
		cin >> vector[i];
	}
}

void impares(int vec[], int tam) {

	int impar[100];
	int j = 0;
	//sacamos los numero impares
	for (int i = 0; i < tam; i++) {
		if (vector[i] % 2 != 0) {
			impar[j] = vector[i];
			j++;
		}
	}

	cout << "\n";
	cout << "Los numero impares son:\n";
	for (int i = 0; i < j; i++) { //tiene que ser menor a j porque esta guardando el nuevo tama�o
		cout << impar[i] << "     ";
		
	}
}*/
