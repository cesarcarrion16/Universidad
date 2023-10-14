/* Escriba un programa que calcule la siguiente
1-2+3-4+5-6+7-8....n */ //factorial

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

	int n, suma = 0, par = 0, impar = 0, negativo = 0;
	cout << "Digite el numero de elementos:";
	cin >> n;

	for (int i = 1; i <=n; i++)	{
		if (i % 2 == 0) {//encontramos los numeros pares
			negativo = i * -1;//cambiamos a negativo
			par += negativo;//sumamos los negativos
		}
		else{
			impar += i;//impares son positivos

		}

		

	}
	suma = par + impar;

	cout << "El resultado de las sumas es: " << suma << endl;
	
	system("pause");
	return 0;
}*/