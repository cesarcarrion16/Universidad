/*2) Realice un menu que simule un cajero automático. con un saldo inicial de ¢500.000
Deberá tener como minimo las siguientes opciones:
-Consulta de saldo.
-Deposito de efectivo.
-Retiro de efectivo.  */


#include<iostream>//cout cin
#include<stdlib.h>//system(pause) system(cls)
using namespace std;
/*
int main() {
	float saldoi = 500000, deposito = 0, depositado = 0, retiro = 0, retirado = 0, consulta = 0;
	int op = 1;//solo puedo escoger una opcion a la vez

	while (op != 4) {
		system("cls");
		cout << "********************************************************************\n";
		cout << "                    MENU PRINCIPAL\n";
		cout << "********************************************************************\n";
		cout << "                  1.Consulta de saldo\n";
		cout << "                  2.Deposito de efectivo\n";
		cout << "                  3.Retiro de efectivo\n";
		cout << "                  4.Salir\n";
		cout << "                  Elija una opcion: \n";
		cin >> op;

		switch (op) {
		case 1:
			system("cls");
			consulta = saldoi + depositado - retirado;
			cout << " El saldo de su cuenta es de: " << consulta << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 2:
			system("cls");
			cout << "Digite el monto que se deposito en efectivo: ";
			cin >> deposito;
			depositado = depositado + deposito;
			cout << "El monto depositado en efectivo en su cuenta es de: " << deposito << endl;
			system("pause");
			break;//me manda al menu pricipal

		case 3:
			system("cls");
			cout << "Digite el monto que quiere retirar en efectivo : \n";
			cin >> retiro;
			if (retiro > 0 && retiro <= (saldoi + depositado -retirado)) {
				retirado = retiro + retirado;
				cout << "El monto retirado en efectivo de su cuenta es de: " << retiro << endl;
			}
			else if (retiro == 0) {
				cout << "El monto de su retiro no es valido" << endl;
			}
			else {
				retiro = retiro * 0;
				cout << "Su cuenta no tiene saldo suficiente" << endl;
			}
			system("pause");
			break;//me manda al menu pricipal
		}
	}
}*/