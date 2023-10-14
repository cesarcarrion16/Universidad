/*. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes
campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle
una categoría de competición:
- Juvenil <= 18 años
- Elite <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de
competición.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Corredor {
	char nombre[20];
	int edad;
	char sexo[20];
	char equipo[20];
}corredor1;

int main() {
	char categoria[20];

	cout << "Nombre del corredor. "; cin.getline(corredor1.nombre, 20, '\n');
	cout << "Edad del corredor: "; cin >> corredor1.edad;
	while (getchar() != '\n');
	cout << "Sexo del corredor: "; cin.getline(corredor1.sexo, 20, '\n');
	cout << "Equipo del corredor: "; cin.getline(corredor1.equipo, 20, '\n');

	if (corredor1.edad <= 18) {
		strcpy_s(categoria, "Juvenil");
	}
	else if (corredor1.edad <= 40) {
		strcpy_s(categoria, "Elite");
	}
	else {
		strcpy_s(categoria, "Veterano");
	}

	cout << "MOSTRANDO LOS DATOS DEL CORREDOR\n";
	cout << "Nombre: " << corredor1.nombre;
	cout << "Edad: " << corredor1.edad;
	cout << "Sexo: " << corredor1.sexo;
	cout << "Equipo: " << corredor1.equipo;
	cout << "Categoria: " << categoria << endl;

	system("pause");
	return 0;
}