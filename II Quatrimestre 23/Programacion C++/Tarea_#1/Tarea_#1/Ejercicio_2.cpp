/*Escribe un programa que pida nueve números enteros y los almacene en una matriz 3x3.Calcula la suma de los números de cada fila y mostrar por pantalla el número de  fila con mayor suma.*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int matriz[3][3], fila_mayor = 0, suma_mayor = 0, sumar_filas[3] = { 0, 0, 0 };


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]:";
            cin >> matriz[i][j];
            sumar_filas[i] += matriz[i][j];/*suma las filas*/
        }
    }
    /*Muestra los datos*/
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << "   ";
        }
        cout << "\n";
    }

    /*Genera el resultado de cual numero de fila es mayor*/
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sumar_filas[i] > suma_mayor) {
                suma_mayor = sumar_filas[i];
                fila_mayor = i;
            }

        }
    }

    cout << "La fila con la mayor suma es la siguiente: " << fila_mayor << endl;

    system("pause");
    return 0;

}