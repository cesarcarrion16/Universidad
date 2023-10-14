/*1)Realice un Menu que pemita leer una medida en metros ingresada por el usuario y que las opciones permitan transformar esa media a :
-Milimetros
-centimetros
-Kilomentros
-Millas.  */


#include<iostream>//cout cin
#include<stdlib.h>//system(pause) system(cls)
using namespace std;

int main() {
	float metros = 0, calculo = 0;
	int op = 1;//solo puedo escoger una opcion a la vez

	while (op != 5) {
		system("cls");
		cout << "********************************************************************\n";
		cout << "                    MENU PRINCIPAL\n";
		cout << "********************************************************************\n";
		cout << "                  1.Convertir a milimetros\n";
		cout << "                  2.Convertir a centimetros\n";
		cout << "                  3.Convertir a kilomentros\n";
		cout << "                  4.Convertir a millas\n";
		cout << "                  5.Salir\n";
		cout << "                  Elija una opcion: \n";
		cin >> op;

		switch (op) {
		case 1:
			system("cls");
			cout << "Digite el valor en metros:\n";
			cin >> metros;
			//validar tipo de datos que sean float
			if (cin.good()) {
				calculo = metros * 1000;
				cout << "El resultado en milimetros es: " << calculo << endl;
				system("pause");
				break;//me manda al menu pricipal
			}
			else {
				//por si hay algo mal.
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "El dato ingresado es invalido, por favor intente de nuevo" << endl;
				system("pause");
				break;//me manda al menu pricipal
			}
			

		case 2:
			system("cls");
			cout << "Digite el valor en metros:\n";
			cin >> metros;
			if (cin.good()) {
				calculo = metros * 100;
				cout << "El resultado en centimetros es: " << calculo << endl;
				system("pause");
				break;//me manda al menu pricipal
			}

			else {
				//por si hay algo mal.
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "El dato ingresado es invalido, por favor intente de nuevo" << endl;
				system("pause");
				break;//me manda al menu pricipal
			}

			

		case 3:
			system("cls");
			cout << "Digite el valor en metros:\n";
			cin >> metros;
			if (cin.good()) {
				calculo = metros * 0.001;
				cout << "El resultado en kilometros es: " << calculo << endl;
				system("pause");
				break;//me manda al menu pricipal
			}

			else {
				//por si hay algo mal.
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "El dato ingresado es invalido, por favor intente de nuevo" << endl;
				system("pause");
				break;//me manda al menu pricipal
			}
			

		case 4:
			system("cls");
			cout << "Digite el valor en metros:\n";
			cin >> metros;
			if (cin.good()) {
				calculo = metros * 0.000621371;
				cout << "El resultado en millas es: " << calculo << endl;
				system("pause");
				break;//me manda al menu pricipal
			}

			else {
				//por si hay algo mal.
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "El dato ingresado es invalido, por favor intente de nuevo" << endl;
				system("pause");
				break;//me manda al menu pricipal

			}

		}
	}
}