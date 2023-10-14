/* Escriba una funcion llamada multi()que acepte dos numeros en punto
flotante como parametros, multiplique estos numeros y muestre
el resultado*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void multi(float x, float y);
float n1, n2;


int main() {
	pedirDatos();
	multi(n1, n2);

	system("pause");
	return 0;
}

void pedirDatos() {
	cout << " Digite dos numeros con decimales: ";
	cin >> n1 >> n2;
}

void multi(float x, float y) {
	float multiplicacion = x * y;
	cout << " La multiplicacion de los dos numeros es: " << multiplicacion << endl;

}