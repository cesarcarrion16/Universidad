/*Defina una estructura que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado n etapas calcule el tiempo total empleado en 
correr todas las etapas*/


/*
#include<iostream>
#include<stdlib.h>
using namespace std;

struct ciclista {
	int horas;
	int minutos;
	int segundos;
}etapas[10];

int main() {
	int horasT=0, minutosT=0, segT=0, n;


	cout << "Digite las cantidad de etapas realizadas por el ciclista: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		cout << "Digite las horas de la etapa " << i + 1 << ":";
		cin >> etapas[i].horas;
		horasT+= etapas[i].horas;
		cout << "Digite los minutos de la etapa " << i + 1 << ":";
		cin >> etapas[i].minutos;
		minutosT+= etapas[i].minutos;
		cout << "Digite los segundos de la etapa " << i + 1 << ":";
		cin >> etapas[i].segundos;
		segT+= etapas[i].segundos;

		if (minutosT >= 60) {
			minutosT -= 60;
			horasT++;
		}
		if (segT >= 60) {
			segT -= 60;
			minutosT++;
		}
		cout << "\n";
	}
	cout << "\n";

	

	cout << "El tiempo total empleado en correr todas las etapas es de: " << horasT << ":" << minutosT << ":" << segT << endl;
	


	system("pause");
	return 0;
}*/