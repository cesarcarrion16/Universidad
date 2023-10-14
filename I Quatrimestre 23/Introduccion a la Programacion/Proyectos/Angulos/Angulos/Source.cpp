
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int angulo;

	cout << "Digite el valor del angulo: \n";
	cin >> angulo;
	//condicionales
	if (angulo == 90) {
		cout << "El angulo es RECTO\n";
	}
	else if(angulo>0 && angulo<90){
		cout << "El angulo es AGUDO\n";
	}
	else if (angulo > 90 && angulo < 180) {
		cout << "El angulo es OBTUSO\n";
	}
	else if (angulo == 180){
		cout << "El angulo es LLANO\n";
	}
	else {
		cout << "El valor digitado no es valido\n";
	

	}
	system("pause");
	return 0;
}