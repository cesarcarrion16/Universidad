/*2) Realizar un programa que lea un arreglo de estructuras los datos de N empleados  de la empresa
y que imprima los datos del empleado con mayor y menor salario.
NOTA: Usar FUNCIONES Y PUNTEROS*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Empleado {
    char nombre[20];
    int edad;
    double salario;
}empleados[20], *p_empleados = empleados;


void pedirDatos(int);
void salario_menor(Empleado*, int);



int main() {
    int n;
    cout << "Digite la cantidad de empleados a ingresar: " << endl;
    cin >> n;

    pedirDatos(n);
    salario_menor(p_empleados, n);

    system("pause");
    return 0;
}


void pedirDatos(int n) {
    for (int i = 0; i < n; i++) {
        // Se accede a la estructura mediante el puntero y para almacenar la informacion
        while (getchar() != '\n');
        cout << "Digite el nombre del empleado " << i + 1 << ": ";
        cin.getline((p_empleados + i)->nombre, 20, '\n');
        cout << "Digite la edad del empleado " << i + 1 << ": ";
        cin >> (p_empleados + i)->edad;
        cout << "Digite el salario del empleado " << i + 1 << ": ";
        cin >> (p_empleados + i)->salario;
        cout << "\n";
    }
}

void salario_menor(Empleado* p_empleados, int n) {
    double salario_men = 999999999;
    int pos_menor = 0;

    for (int i = 0; i < n; i++) {
        if (p_empleados->salario < salario_men) {
            salario_men = (p_empleados + i)->salario;
            pos_menor = i;
        }
        p_empleados++;
    }
    cout << "\nEmpleado con menor salario es:" << endl;
    cout << "Nombre: " << (p_empleados + pos_menor)->nombre << endl;
    cout << "Edad: " << (p_empleados + pos_menor)->edad << endl;
    cout << "Promedio: " << (p_empleados + pos_menor)->salario << endl;
}