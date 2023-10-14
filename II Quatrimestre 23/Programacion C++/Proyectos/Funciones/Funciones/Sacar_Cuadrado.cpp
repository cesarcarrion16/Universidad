/* Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del
valor del numero que se le trasmita. y muestre el resultado. La funcion debe
sr capaz de elevar al cuadrado numeros flotantes*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float n);
float numero;


int main() {
	pedirDatos();
	al_cuadrado(numero);

	system("pause");
	return 0;
}
void pedirDatos() {
	cout << "Digite un numero con decimales:";
	cin >> numero;
}
void al_cuadrado(float n) {
	float cuadrado = 0;
	cuadrado = numero * numero;
	cout << " El cuadrado del numero es:" << cuadrado << endl;
}