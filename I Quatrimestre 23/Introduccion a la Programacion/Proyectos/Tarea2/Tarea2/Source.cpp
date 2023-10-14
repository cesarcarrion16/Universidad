/*Los vendedores de una empresa tienen en su sueldo una parte fija(250,000) y otra variable
que es un incentivo por comision, segun las ventas realizadas. El incentivo es un porcentaje creciente  sobre las ventas. Si vende 200,000 o mas , tiene un incentivo del 8%, si vende
entre menos 200,000 y 150,000 o mas le añade un 6%, si vende menos 150,000 y 90,000 o mas el incentivo es de 4% y si vende menos de 90000 se limita a 1%, 
Realice un programa que determine el monto final del incentivo. */


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int ventas, incentivo = 0;
	cout << "Digite el monto de lo vendio por el empleado: \n";
	cin >> ventas;

	//condiciones
	if (ventas >= 200000) {
		incentivo = ventas * 0.08;
		cout << "El incentivo del vendedor es por: " << incentivo << endl;

	}
	else if (ventas >= 150000 && ventas < 200000) {
		incentivo = ventas * 0.06;
		cout << "El incentivo del vendedor es por: " << incentivo << endl;
	}
	else if (ventas >= 90000 && ventas < 150000) {
		incentivo = ventas * 0.04;
		cout << "El incentivo del vendedor es por: " << incentivo << endl;
	}
	else {
		incentivo = ventas * 0.01;
		cout << "El incentivo del vendedor es por: " << incentivo << endl;
	}


	system("pause");
	return 0;
}