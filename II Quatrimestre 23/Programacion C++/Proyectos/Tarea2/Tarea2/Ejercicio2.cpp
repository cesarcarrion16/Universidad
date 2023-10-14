/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los
siguientes campos: nombre, país, numero_medallas. y devuelva los datos
(Nombre, país) del atleta que ha ganado el mayor número de medallas.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct atletas {
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atletas[100];



int main() {
	int n, medallas = 0,posicion=0;

	cout << "Digite la cantidad de atletas: ";
	cin >> n;
	cout << "\n";

	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		cout << "Digite el nombre del atleta: ";
		cin.getline(atletas[i].nombre, 20, '\n');
		cout << "Digite el pais del atleta: ";
		cin.getline(atletas[i].pais, 20, '\n');
		cout << "Digite el numero de medallas ganadas: ";
		cin >> atletas[i].numero_medallas;
		cout << "\n";
		//Determina salario mayor
		if (atletas[i].numero_medallas > medallas) {
			medallas = atletas[i].numero_medallas;
			posicion = i;
		}

	}
	//Mostrar datos
	cout << "El atleta con mayor numero de medallas es: " << endl;
	cout << "  Nombre: " << atletas[posicion].nombre << endl;
	cout << "  Pais: " << atletas[posicion].pais << endl;
	cout << "  Numero de medallas: " << atletas[posicion].numero_medallas << endl;
	cout << "\n";



	system("pause");
	return 0;
}