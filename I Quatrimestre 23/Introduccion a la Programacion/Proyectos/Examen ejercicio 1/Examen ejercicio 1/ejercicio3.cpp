/*Escribir un programa que lea el precio de un producto ingresado por el usuario y muestre en la salida estándar el precio del producto al aplicarle el 13% IVA.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	long precio, iva, total;
	cout << "Digite el precio del producto: \n";
	cin >> precio;
	iva = precio * 0.13;
	total = precio + iva;
	cout << "\n";
	cout << "Precio sin IVA: " << precio << endl;
	cout << "Precio del IVA: " << iva << endl;
	cout << "Precio con IVA: " << total << endl;
	cout << "\n";



	system("pause");
	return 0;
}