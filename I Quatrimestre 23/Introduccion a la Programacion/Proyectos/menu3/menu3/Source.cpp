#include<iostream>//cout cin
#include<stdlib.h>//system(pause) system(cls)
using namespace std;

int main() {
	float area = 0, lado, largo, ancho, dM, dm, radio, Pi = 3.141519;
	int op = 1;//solo puedo escoger una opcion a la vez

	while (op != 5) {
		system("cls");
		cout << "********************************************************************\n";
		cout << "                    MENU PRINCIPAL\n";
		cout << "********************************************************************\n";
		cout << "                  1.Area de un cuadrado\n";
		cout << "                  2.Area de un rectangulo\n";
		cout << "                  3.Area de un rombo \n";
		cout << "                  4.Perimetro de la circunferencia\n";
		cout << "                  5. Salir\n";
		cout << "                  Elija una opcion: \n";
		cin >> op;

		switch (op) {
		case 1:
			system("cls");
			cout << "Digite el valor del lado\n";
			cin >> lado;
			area = lado * lado;
			cout << " El resultado del area es: " << area << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 2:
			system("cls");
			cout << "Digite el largo:\n";
			cin >> largo;
			cout << "Digite el ancho:\n";
			cin >> ancho;
			area = largo * ancho;
			cout << " El resultado del area es: " << area << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 3:
			system("cls");
			cout << "Digite la Diagonal Mayor\n";
			cin >> dM;
			cout << "Digite la Diagonal Menor\n";
			cin >> dm;
			area = (dM * dm) / 2;
			cout << " El resultado del area es: " << area << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 4:
			system("cls");
			cout << "Digite el valor del radio\n";
			cin >> radio;
			area = 2 * Pi * radio;  //2 pi r
			cout << " El resultado del perimetro es: " << area << endl;
			system("pause");
			break;//me manda al menu pricipal
		}
	}
}