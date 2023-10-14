
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int edad;

	cout << "Digite la edad a evaluar:\n";
	cin >> edad;
	//CONDICIONES
	if (edad < 12) {
		cout << "La persona es un nino\n";
	}
	else if (edad >= 12 && edad <= 17) {
		cout << "La persona es un adolescente\n";
	}
	else if (edad >= 18 && edad <= 60) {
		cout << "La persona es un adulto\n";
	}
	else {
		cout << "La persona es de la Tercera edad\n";
	}

	system("pause");
	return 0;




}
