/*1. Utilizando arreglos cree un programa que cumpla con el siguiente MENU:

1) Ingresar elementos del arreglo

2) Mostrar los elementos del arreglo

3) La media de los elementos ingresados

4) Elemento mayor del arreglo

5) Elemento menor del arreglo

6) Salir*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int op = 1, elementos_vector[100], cantidad_elementos, mayor=0, menor=0;
	float media, suma_media = 0;


	while (op != 6) {
		system("cls");
		cout << "********************************************************************\n";
		cout << "                    MENU PRINCIPAL\n";
		cout << "********************************************************************\n";
		cout << "                  1.Ingresar elementos del arreglo.\n";
		cout << "                  2.Mostrar los elementos del arreglo\n";
		cout << "                  3.La media de los elementos ingresados\n";
		cout << "                  4.Elemento mayor del arreglo\n";
		cout << "                  5.Elemento menor del arreglo\n";
		cout << "                  6.Salir\n";
		cout << "                  Elija una opcion: \n";
		cin >> op;

		switch (op) {
		case 1: //se solicita la informacion
			system("cls");
			cout << "Digite cuantos elementos desea ingresar: \n";
			cin >> cantidad_elementos;
			cout << "\n";
			for (int i = 0; i < cantidad_elementos; i++) {
				do {
					cout << i + 1 << ". Digite un numero: ";
					cin >> elementos_vector[i];//Guardamos los elementos en el arreglo
					if (elementos_vector[i] <= 0) {
						cout << "El numero debe ser mayor que cero... Error!!!\n";
					}
				} while (elementos_vector[i] <= 0);	
				cout << "\n";
			}
			system("pause");
			break;

		case 2: //Se imprimen los datos
			system("cls");
			cout << "Los elementos del arreglo agregados serian: \n";
			for (int i = 0; i < cantidad_elementos; i++) {
				cout << elementos_vector[i];
				cout << "\n";
			}
			system("pause");
			break;

		case 3: //Se saca la media
			system("cls");
			for (int i = 0; i < cantidad_elementos; i++) {
				suma_media = suma_media + elementos_vector[i];
			}
			media = suma_media / cantidad_elementos;
			cout << "La media de los elementos ingresados es: " << media << endl;
			system("pause");
			break;
			
		case 4://se saca el elemento mayor
			system("cls");
			for (int i = 0; i < cantidad_elementos; i++) {
				if (elementos_vector[i] > mayor) {
					mayor = elementos_vector[i];
				}
			}
			cout << "El elemento mayor del arreglo es: "<<mayor<<endl;
			system("pause");
			break;

		case 5://se saca el elemento menor
			system("cls");
			for (int i = 0; i < cantidad_elementos; i++) {
				if (0==i) {
					menor = elementos_vector[i];
				}
				else if (elementos_vector[i] < menor) {
					menor = elementos_vector[i];
				}
			}
			cout << "El elemento menor del arreglo es: " << menor << endl;
			system("pause");
			break;

		}
	}
}