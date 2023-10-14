#include<iostream>//cout cin
#include<stdlib.h>//system(pause) system(cls)
using namespace std;

int main() {
	float num1,num2,resultado=0;	
	int op = 1;//solo puedo escoger una opcion a la vez

	while (op != 3) {
		system("cls");
		cout << "************************MENU PRINCIPAL******************\n";
		cout << "                  1. Suma de dos numeros\n";
		cout << "                  2. Resta de dos numeros\n";
		cout << "                  3. Salir\n";
		cout << "                  Elija una opcion: \n";
		cin >> op;

		switch (op) {
		case 1:
			system("cls");
			cout << "Digite el primer numero:\n";
			cin >> num1;
			cout << "Digite el segundo numero:\n";
			cin >> num2;
			resultado = num1 + num2;
			cout << " El resultado del area es: " << resultado << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 2:
			system("cls");
			cout << "Digite el primer numero:\n";
			cin >> num1;
			cout << "Digite el segundo numero:\n";
			cin >> num2;
			resultado = num1 - num2;
			cout << " El resultado del area es: " << resultado << endl;
			system("pause");
			break;//me manda al menu pricipal


		}
	}
}