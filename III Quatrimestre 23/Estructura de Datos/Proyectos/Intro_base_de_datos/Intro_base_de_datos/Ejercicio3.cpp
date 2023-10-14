/*sobrecarga de constructores*/



#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
private://Atributos
	int dia,mes,anho;
public://metodo
	Fecha(int,int,int);//se ponen 2 porque tiene 2 variables.
	Fecha(long);
	void mostrarFecha();
};

//constructor 1
Fecha::Fecha(int _dia, int _mes, int _anho) {
	dia = _dia;
	mes = _mes;
	anho = _anho;
}
//constructor 2
Fecha::Fecha(long fecha) {
	anho = int(fecha / 10000);//se extrae el año 20231005
	mes= int((fecha - anho*10000)/100);//extraer mes
	dia = int(fecha - anho * 10000 - mes * 100); //extraermos el dia
}

void Fecha::mostrarFecha() {
	cout << "la fecha es: " << dia << "/" << mes << "/" << anho << endl;
}

int main() {
	Fecha hoy(05, 10, 2023);
	Fecha ayer(20231004);
	hoy.mostrarFecha();
	ayer.mostrarFecha();

	system("pause");
	return 0;
}