/*Realiza una funcion que tome como parametros un vector de numeros y su 
tamaño y cambie el signo de los elementos del vector*/



#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void cambioSigno(int vec[], int tam);
void mostrarVector(int vec[], int tam);
int vector[100], tam;

int main() {

	pedirDatos();
	cambioSigno(vector, tam);
	mostrarVector(vector, tam);

	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Digite el numero de elementos: ";
	cin >> tam;

	for (int i = 0; i < tam; i++) {
		cout << i + 1 << " Digite un numero:";
		cin >> vector[i]; // 5  -9  6  -7  8
	}
}
void cambioSigno(int vec[], int tam) {

	for (int i = 0; i < tam; i++) {
		vector[i] *= -1;  //-5  9  -6  7  -8
	}
}
void mostrarVector(int vec[], int tam) {

	cout << " Mostrando el vector con cambio de signo:\n";
	for (int i = 0; i < tam; i++) {
		cout << vector[i] << "   ";
	}
}