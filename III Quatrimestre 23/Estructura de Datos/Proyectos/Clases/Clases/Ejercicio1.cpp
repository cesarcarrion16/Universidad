//clases
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

//declara la clase
class Persona {
private://Atributo cuando es nombre siempre String
	int edad;
	string nombre;

public://metodo
	Persona(int, string); // si hay mas clases privadas hay que hacerlas orden a como estan
		void leer();
	void comer();

};

//Declaramos el constructor
Persona::Persona(int _edad, string _nombre) / Se puede utilizar el mismo nombre poniendo un _ antes del nombre de la variable / {
	edad = _edad;//con esta igualdad puedo ya entrar a lo privado;
	nombre = _nombre;

}
//Declaramos primer metodo
void Persona::leer() {
	cout << " Soy " << nombre << " y estoy leyendo un cuento\n";

}
//Declaramos segundo metodo
void Persona::comer() {
	cout << " Soy " << nombre << "Tengo" << edad << " y estoy comiendo una hamburguesa\n";
}

int main() {
	//Crear un objeto 1 forma
	Persona p1 = Persona(25, "Cesar");
	//Crear un objeto 2 forma
	Persona p2(22, "Maria");
	Persona p3(24, "Luis");
	//se le asigna los metodos a las personas
	p1.leer();
	p2.comer();
	p3.leer();

	system("pause");
	return 0;
}*/