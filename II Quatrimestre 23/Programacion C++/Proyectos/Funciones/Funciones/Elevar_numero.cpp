/* Escriba una funcion llamada funpot()que eleve un numero entero que se le trasmita a
una potencia en numero entero positivo, y muestre el resultado.
El numero entero positivo debera ser el segundo valor trasmitido a la funcion*/

#include<iostream>
#include<stdlib.h>
using namespace std;


void pedirDatos();
void funpot(int x, int y);
int numero, exponente;

int main() {

	pedirDatos();
	funpot(numero, exponente);

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << " Digite el numero a elevar:";
	cin >> numero;
	cout << " Digite el exponente de elevacion:";
	cin >> exponente;
}
void funpot(int x, int y) {
	int resultado = 1;

	for (int i = 1; i <= y; i++) {
		resultado *= x;

	}
	cout << " El resultado de la elevacion es: " << resultado << endl;

}