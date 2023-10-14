/* Defina una estructura que indique el tiempo empleado por un ciclista en
recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas las etapas.
NOTA: Usar FUNCIONES Y PUNTEROS.*/

#include <iostream>
#include<stdlib.h>
using namespace std;

struct Ciclista {
    int horas;
    int minutos;
    int segundos;
}etapas[3],*puntero_etapas=etapas;

void pedirDatos();
void calcularTiempo(Ciclista*);

int main() {

    pedirDatos();
    calcularTiempo(puntero_etapas);


    system("pause");
    return 0;
}

void pedirDatos() {
    for (int i = 0; i < 3; i++) {
        // Se accede a la estructura mediante el puntero y para almacenar la informacion
        cout << "Digite las horas de la etapa " << i + 1 << ": ";
        cin >> (puntero_etapas + i)->horas;
        cout << "Digite los minutos de la etapa " << i + 1 << ": ";
        cin >> (puntero_etapas + i)->minutos;
        cout << "Digite los segundos de la etapa " << i + 1 << ": ";
        cin >> (puntero_etapas + i)->segundos;
        cout << endl;
    }
}

void calcularTiempo(Ciclista* puntero_etapas) {

    int horasT = 0, minutosT = 0, segT = 0;
    for (int i = 0; i < 3; i++) {
        // Se accede a la estructura mediante el puntero para sumar los tiempos
        horasT += (puntero_etapas + i)->horas;
        minutosT += (puntero_etapas + i)->minutos;
        segT += (puntero_etapas + i)->segundos;

        if (minutosT >= 60) {
            minutosT -= 60;
            horasT++;
        }
        if (segT >= 60) {
            segT -= 60;
            minutosT++;
        }
    }
    cout << "El tiempo total empleado en correr todas las etapas es de: " << horasT << ":" << minutosT << ":" << segT << endl;
}
