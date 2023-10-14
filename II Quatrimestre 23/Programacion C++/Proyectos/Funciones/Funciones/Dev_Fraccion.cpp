/* Escriba un programa que devuelva la parte fraccionaria
de un  numero ingresado por el usuario. Por ejemplo
256.879 debera desplegar el numero 0.879*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
float fraccionaria(float n);
float numero;

int main() {




	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Digite un numero con decimales:";
	cin >> numero;
}
float fraccionaria(float n) {
	// 45.567 devuelva 45
	int entero = n;
	float resultado = n - entero;
	return resultado;
}