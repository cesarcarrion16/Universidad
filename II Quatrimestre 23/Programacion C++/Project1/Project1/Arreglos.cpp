/*Realice un programa qe rellene un arreglo y muestre la sma de sus elementos*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int numeros[100], suma = 0, n;

	cout << "Digite la cantidad de elementos del arreglo: \n";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Digite un numero " << i + 1 << endl;
		cin >> numeros[i];

		suma += numeros[i];

	}

	cout << "El resultado de la suma de los elementos es: " << suma << endl;



	system("pause");
	return 0;
}