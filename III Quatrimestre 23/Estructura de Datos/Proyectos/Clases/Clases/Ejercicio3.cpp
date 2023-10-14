/* Sobrecarga de Constructores */
/*

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha {
private:
	int dia, mes, anio; // 05/10/2023
public:
	Fecha(int, int, int);
	Fecha(long);
	void mostrarFecha();

};
//Contructor 1
Fecha::Fecha(int _dia, int _mes, int _anio) {
	dia = _dia;
	mes = _mes;
	anio = _anio;
}

//Constructor 2
Fecha::Fecha(long fecha) {
	anio = int(fecha / 10000); //Extraernos el anio 20231005
	mes = int((fecha - anio * 10000) / 100); //Extraemos Mes
	dia = int(fecha - anio * 10000 - mes * 100); //Extraemos el dia
}

//mostrar fecha
void Fecha::mostrarFecha() {
	cout << " La Fecha es : " << dia << " / " << mes << " / " << anio << endl;

}


int main() {
	Fecha hoy(05, 10, 2023);
	Fecha ayer(20231004);
	hoy.mostrarFecha();
	ayer.mostrarFecha();


	system("pause");
	return 0;
}*/