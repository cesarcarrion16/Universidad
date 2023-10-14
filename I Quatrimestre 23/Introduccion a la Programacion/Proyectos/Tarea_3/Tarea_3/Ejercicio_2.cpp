/*2.Desarrolle un programa en C++ que permita ingresar y almacenar el código de todos los
artículos de una bodega. Mostrar los códigos ingresados, e indicar la cantidad de códigos
que tienen un valor menor al promedio. Utilice un vector denominado codigos[ ] para
almacenar el código de cada artículo.*/


#include<iostream>
#include<stdlib.h>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	int n, suma_codigos=0;
	int promedio = 0, temp = 0;

	// Crear un vector vacio
	vector<int> codigos;

	cout << " Ingrese el numero de productos que desea ingresar: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		do {
			cout << " Ingrese el codigo del producto " << (i + 1) << ":";
			cin >> temp;
			if (temp < 0) {
				cout << "Codigo debe ser mayor que cero... ERROR!!!!\n";
			}
			else {
				codigos.push_back(temp);
			}
		} while (codigos[i] <= 0);
	}

	promedio = accumulate(codigos.begin(), codigos.end(), 0) / codigos.size();
	cout << "\n";

	//mostrando los codigos
	int cantidad_codigos = 0;
	for (int i = 0; i < n; i++) {
		cout << "Codigo del producto " << i + 1 << ":" << codigos[i] << endl;
		if (codigos[i] < promedio) {
			cantidad_codigos++;
		}
	}
	cout << "\n";
	cout << "Los productos que contienen un valor menor al promedio son: " << cantidad_codigos << endl;

	system("pause");
	return 0;
}