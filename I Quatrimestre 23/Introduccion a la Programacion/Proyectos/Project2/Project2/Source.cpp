//Con doble / se comenta, 
/*si el comentario es de nas de 2 lineas 
se usa asi*/

// Declaracion de bibliotecas

#include<iostream>//cin  cout
#include<stdlib.h>//system("pause"), system("cls")
using namespace std;//interprete, siempre se usa para cuando hay librerias.

int main() {
// Declaracion de variables
	int num1, num2, suma = 0; //siempre poner ; al final de cada linea de codigo despues del main.

	cout << "Digite el primer numero: "<<endl; //para hacer un salto de line se puede utilizar <<endl o se puede usar \n
	cin >> num1;
	cout << "Digite el segundo numero: " << endl;//cout muestra el comentario en pantalla
	cin >> num2;
	

	//operacion
	suma = num1 + num2;

	cout << "El resultado de la suma es: " << suma << endl;


	system("pause");//pausa de revision
	return 0;//fin de la ejecucion del programa


}