
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	float nota1, nota2, nota3, prom = 0;
	cout << "Digite el valor de la primera nota: \n";
	cin >> nota1;
	cout << "Digite el valor de la segunda nota: \n";
	cin >> nota2;
	cout << "Digite el valor de la tercera nota: \n";
	cin >> nota3;

	prom = (nota1 + nota2 + nota3) / 3;

	cout << "EL promedio es: " << prom << endl;

	//condiciones
	if (prom >= 70) {
		cout << "El estudiante esta aprobado\n";
	}
	else if (prom >= 60 && prom < 70) {
		cout << "El estudiante va a ampliacion\n";
	}
	else {
		cout << "El estudiante esta reprobado\n";
	}


	system("pause");
	return 0;
}
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	float notap, notat, notae, prom = 0;
	cout << "Digite el valor de la nota de participacion: \n";
	cin >> notap;
	cout << "Digite el valor de la nota de tareas: \n";
	cin >> notat;
	cout << "Digite el valor de la nota de Examenes: \n";
	cin >> notae;

	notap = notap * 0.10;
	notat = notat * 0.40;
	notae = notae * 0.50;

	prom = (notap + notat + notae);

	cout << "La nota del estudiante es: " << prom << endl;

	//condiciones
	if (prom >= 70) {
		cout << "El estudiante esta aprobado\n";
	}
	else if (prom >= 60 && prom < 70) {
		cout << "El estudiante va a ampliacion\n";
	}
	else {
		cout << "El estudiante esta reprobado\n";
	}


	system("pause");
	return 0;
}