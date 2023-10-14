/*Realice un programa donde se pida al usuario llenar dos cadenas de caracteres, luego, unir ambas cadenas y Mostrar las cadenas unidas.

Si la cadena es mayor a 20 caracteres, indicar la longitud de la cadena, si es menor a 20 caracteres indicar el siguiente mensaje " la cadena no supera los 20 caracteres".

Si la longitud es mayor a 20 caracteres mostrar la cadena en Mayúscula de lo contrario mostrar la cadena invertida*/


#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main() {

	int longitud=0;
	char cadena1[100], cadena2[100];
	string cadenas_unidas[1000];

	//solicita los datos
	cout << "Digite la primera cadena de caracteres: ";
	cin.getline(cadena1, 100, '\n');
	cout << "Digite la segunda cadena de caracteres: ";
	cin.getline (cadena2,100,'\n');

	strcat_s(cadena1, " "); //le da un espacio a las 2 cadenas
	strcat_s(cadena1, cadena2); //Une las 2 cadenas
	longitud = strlen(cadena1); //Saca la longitud de la cadena
	cout << "\n";
	cout << cadena1 << endl;
	cout << "\n";
	cout << "La longitud de la cadena es de: " << longitud << endl;

	cout << "\n";

	if (longitud >= 20) {
		_strupr_s(cadena1);//convierte a mayuscula
		cout << "La longitud de la cadena es mayor a 20 caracteres"<<endl;
		cout << "\n";
		cout<< "La cadena de caracteres es: \n"<<cadena1<<endl;
	}
	else {
		_strrev(cadena1);//invierte la palabra
		cout << "La cadena no supera los 20 caracteres\n";
		cout << "\n";
		cout << "La cadena de caracteres es: \n" << cadena1 << endl;
	}
	cout << "\n";

	
	system("pause");
	return 0;

}
