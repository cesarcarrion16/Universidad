/*. Defina una estructura que sirva para representar a una persona. La estructura
debe contener dos campos: el nombre de la persona y un valor de tipo lógico que indica
si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Persona_discapacidad {
	char nombre[20];
	bool discapacidad;
}persona[30], personaConD[30], personaSinD[30];



int main() {

	int n, j = 0, k = 0;

	cout << "Digite la cant de personas: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		cout << "Nombre: "; cin.getline(persona[i].nombre, 20, '\n');
		cout << "Discapacidad (1/0)?"; cin >> persona[i].discapacidad;

		//Almacenar los que tiene Discapacidad
		if (persona[i].discapacidad == 1) {
			strcpy_s(personaConD[j].nombre, persona[i].nombre);
			j++;
		}
		else {
			strcpy_s(personaSinD[k].nombre, persona[i].nombre);
			k++;
		}
		cout << "\n";
	}

	cout << " Mostrando las personas con discapacidad:\n";
	for (int i = 0; i < n; i++) {
		cout << personaConD[i].nombre << endl;

	}
	cout << " Mostrando las personas sin Discapacidad\n";
	for (int i = 0; i < n; i++) {
		cout << personaSinD[i].nombre << endl;
	}
	system("pause");
	return 0;
}