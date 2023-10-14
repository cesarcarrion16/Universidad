/*Realice un programa que calcule el area de un triangulo*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	float base, altura, area = 0;//se usa float para que no nos de numeros exactos

	cout << "Digite el valor de la base: " << endl;
	cin >> base;
	cout << "Digite el valor de la altura: " << endl;
	cin >> altura;

	area = (base * altura) / 2;

	cout << "El area del triangulo es: " << area << endl;
	system("pause");
	return 0;








}