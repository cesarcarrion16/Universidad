//Ejercicio 1

#include <iostream>
#include <stdlib.h>
using namespace std;


/***************************************************CLASES***************************************************/

//clase padre
class Persona {
private://atributos
	string nombre;
	string apellido;
public://metodos o acciones
	Persona(string, string);//constructor
	void mostrarPersona();
};

//CLase Cliente (hija)
class Cliente :public Persona {//referencia entre clases (solo lo publico)
private:
	string direccion;
public:
	Cliente(string, string, string);
	void mostrarCliente();
};

//Clase Deudor (hija)
class Deudor :public Cliente {//referencia entre clases (solo lo publico)
private:
	string telefono;
public:
	Deudor(string, string, string, string);
	void mostrarDeudor();
};

//Clase Vendedor (hija)
class Vendedor :public Persona {//referencia entre clases (solo lo publico)
private:
	string codigo;
public:
	Vendedor(string, string, string);
	void mostrarVendedor();
};

//Clase Empresa (hija)
class Empresa :public Vendedor {//referencia entre clases (solo lo publico)
private:
	string nombreEmpresa;
	string producto;
public:
	Empresa(string, string, string, string, string);
	void mostrarEmpresa();
};


/***********************************************CONSTRUCTORES***********************************************/
//constructor de la clase Persona
Persona::Persona(string _nombre, string _apellido) {
	nombre = _nombre;
	apellido = _apellido;
}

//constructor de la clase Cliente
Cliente::Cliente(string _nombre, string _apellido, string _direccion) : Persona(_nombre, _apellido) {
	direccion = _direccion;
}

//constructor de la clase Deudor
Deudor::Deudor(string _nombre, string _apellido, string _direccion, string _telefono) : Cliente(_nombre, _apellido, _direccion) {
	telefono = _telefono;
}

//constructor de la clase Vendedor
Vendedor::Vendedor(string _nombre, string _apellido, string _codigo) : Persona(_nombre, _apellido) {
	codigo = _codigo;
}

//constructor de la clase Vendedor
Empresa::Empresa(string _nombre, string _apellido, string _codigo, string _nombreEmpresa, string _producto) : Vendedor(_nombre, _apellido, _codigo) {
	nombreEmpresa = _nombreEmpresa;
	producto = _producto;
}

/*************************************************METODOS*************************************************/


//metodo de la clase Persona
void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
}

//Metodo de la clase Cliente
void Cliente::mostrarCliente() {
	mostrarPersona();
	cout << "Direccion: " << direccion << endl;
}

//Metodo de la clase Deudor
void Deudor::mostrarDeudor() {
	mostrarCliente();
	cout << "Telefono: " << telefono << endl;
}

//Metodo de la clase Vendedor
void Vendedor::mostrarVendedor() {
	mostrarPersona();
	cout << "Codigo: " << codigo << endl;
}

//Metodo de la clase Empresa
void Empresa::mostrarEmpresa() {
	mostrarVendedor();
	cout << "Nombre de la Empresa: " << nombreEmpresa << endl;
	cout << "Producto: " << producto << endl;
}




int main() {
	Cliente cliente1("Luis", "Alvarado", "Guadalupe, Alajuela");
	cout << "Cliente: \n";
	cliente1.mostrarCliente();
	cout << "\n";

	Deudor deudor1("Francisco", "Saborio", "Paso ancho, San Jose", "4023-3248");
	cout << "Deudor: \n";
	deudor1.mostrarDeudor();
	cout << "\n";


	Vendedor vendedor1("Manuel", "Sanchez", "EU1463");
	cout << "Vendedor: \n";
	vendedor1.mostrarVendedor();
	cout << "\n";

	Empresa empresa1("Julio", "Carvajal", "EU5657", "Los Patitos SA", "Helado de Patito");
	cout << "Empresa: \n";
	empresa1.mostrarEmpresa();
	cout << "\n";


	system("pause");
	return 0;
}