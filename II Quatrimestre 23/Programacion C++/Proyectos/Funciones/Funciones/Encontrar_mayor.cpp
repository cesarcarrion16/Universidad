/* Programa que encuentre el valor maximo de dos numeros*/

#include<iostream>
#include<stdlib.h>
using namespace std;

//Prototipos de funcion
int encontrarMax(int x, int y);

int main() {

	int num1, num2;
	int mayor;

	cout << "Digite dos numeros";
	cin >> num1 >> num2;

	mayor = encontrarMax(num1, num2);

	cout << " El mayor de los dos numeros es:" << mayor << endl;
	system("pause");
	return 0;
}

int encontrarMax(int x, int y) {
	int numMax;

	if (x > y) {
		numMax = x;
	}
	else {
		numMax = y;
	}
	return numMax;
}