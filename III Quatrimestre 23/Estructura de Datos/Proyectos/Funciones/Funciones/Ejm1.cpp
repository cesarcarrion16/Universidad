/ Punteros Primer Ejemplo /


#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	int Numero, * dir_NumeroPuntero;
	Numero = 20;
	dir_NumeroPuntero = &Numero; //Asignando la direccion de memoria

	cout << " Numero es: " << *dir_NumeroPuntero << endl;
	cout << " Direccion de memoria :" << dir_NumeroPuntero << endl;



	system("pause");
	return 0;
}