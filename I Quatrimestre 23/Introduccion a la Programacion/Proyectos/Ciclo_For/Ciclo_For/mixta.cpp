/* Escriba un programa que calcule la siguiente
1!+2!+3!+4!....+n! */ //factorial
/*

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

	int n, factorial = 1, suma = 0;

	cout << "Digite un numero:";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		factorial *= i;
		suma += factorial;
	}
	cout << "La suma del factorial es: " << suma << endl;
	system("pause");
	return 0;
}
*/