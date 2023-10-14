/*3. Desarrolle un programa en C++ que permita ingresar 10 números en dos vectores o arreglos.
Calcular y mostrar la diferencia de los números de ambos vectores, desde la posición 3 hasta
la posición 8.*/



#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int vector1[10], vector2[10];

	//rellenar vector 1
	cout << "Vector 1" << endl;
	for (int i = 2; i < 8; i++)
	{
		cout << "Digite un numero para posicion "<<(i+1) << ":" << endl;
		cin >> vector1[i];
	}
	cout << "\n\n";


	//rellenar vector 2
	
	cout << "Vector 2"<<endl;
	for (int i = 2; i < 8; i++)
	{
		cout << "Digite un numero para posicion " << (i + 1) << ":" << endl;
		cin >> vector2[i];
	}
	cout << "\n";

	//sacar la diferencia de numeros
	for (int i = 2; i < 8; i++) {
		cout << "La diferencia de los numeros de la posicion " << (i + 1) << ": " << (vector2[i] - vector1[i]) << endl;

	}

	system("pause");
	return 0;
}