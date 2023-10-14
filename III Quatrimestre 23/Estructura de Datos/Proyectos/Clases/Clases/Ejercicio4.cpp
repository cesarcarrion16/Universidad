//Herencia simple
/*

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

//clase Alumno (Hija)
class Alumno :public Persona {//se referencia la clase publica de los constructores
private:
	string codigoAlumno;
	float notaFinal;
public:
	Alumno(string, int, string, float);//como se hereda se tienen que poner los constructores de la parte de arriba
	void mostrarAlumno();
};

//constructor de la clase Persona
Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

//constructor de la clase Alumno
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) :	Persona(_nombre, _edad) {
	//se llama asi porque los datos ya estan publicos, solo se ponen los que hacen falta saber
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

//metodo de la clase Persona
void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

//Metodo de la clase Alumno
void Alumno::mostrarAlumno() {
	mostrarPersona();
	cout << "Codigo del alumno: " << codigoAlumno << endl;
	cout << "Nota Final: " << notaFinal << endl;
}

int main() {
	Alumno alumno1("Carlos", 25, "2525-12", 85.24);
	alumno1.mostrarAlumno();


	system("pause");
	return 0;
}

*/
