//Herencia compuesta


#include <iostream>
#include <stdlib.h>
using namespace std;

//clase padre
class Persona {
private://atributos
	string nombre;
	int edad;
public://metodos o acciones
	Persona(string, int);//constructor
	void mostrarPersona();
};

//CLase Empleado (hija)
class Empleado :public Persona {//referencia entre clases (solo lo publico)
private:
	float sueldo;
public:
	Empleado(string, int, float);
	void mostrarEmpleado();
};

//Clase Estudiante(hija)
class Estudiante :public Persona {//referencia entre clases (solo lo publico)
private:
	float notaFinal;
public:
	Estudiante(string, int, float);
	void mostrarEstudiante();
};


//Clase Universitario(hija)
class Universitario :public Estudiante {//referencia entre clases (solo lo publico)
private:
	string carrera;
public:
	Universitario(string, int, float, string);
	void mostrarUniversitario();
};

//constructor de la clase Persona
Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

//constructor de la clase Empleado
Empleado::Empleado(string _nombre, int _edad, float _sueldo): Persona(_nombre, _edad) {
	//se llama asi porque los datos ya estan publicos, solo se ponen los que hacen falta saber
	sueldo=_sueldo;
}


//constructor de la clase Estudiante
Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad) {
	//se llama asi porque los datos ya estan publicos, solo se ponen los que hacen falta saber
	notaFinal = _notaFinal;
}


//constructor de la clase Universitario
Universitario::Universitario(string _nombre, int _edad, float _notaFinal,string _carrera): Estudiante(_nombre, _edad,_notaFinal) {
	//se llama asi porque los datos ya estan publicos, solo se ponen los que hacen falta saber
	carrera = _carrera;
}


//metodo de la clase Persona
void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

//Metodo de la clase Empleado
void Empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "Sueldo: " << sueldo << endl;
	
}

//Metodo de la clase Estudiante
void Estudiante::mostrarEstudiante() {
	mostrarPersona();
	cout << "Nota Final: " << notaFinal << endl;
}

//Metodo de la clase Universitario
void Universitario::mostrarUniversitario() {
	mostrarEstudiante();
	cout << "Carrera: " << carrera << endl;

}

int main() {
	Empleado empleado1("Luis",23,450000);
	cout << "Empleado: ";
	empleado1.mostrarEmpleado();
	cout << "\n";
	
	Estudiante estudiante1("Ana", 22, 84.56);
	cout << "Estudiante: ";
	estudiante1.mostrarEstudiante();
	cout << "\n";
	
	Universitario universitario1("Manuel", 26, 74.25, "Medicina");
	cout << "Universitario: ";
	universitario1.mostrarUniversitario();
	cout << "\n";

	Universitario universitario2("Julio", 34, 58.25, "Secretariado");
	cout << "Universitario: ";
	universitario2.mostrarUniversitario();
	cout << "\n";


	system("pause");
	return 0;
}