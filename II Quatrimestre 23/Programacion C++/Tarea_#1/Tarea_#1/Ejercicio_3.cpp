/*Programa que calcule el 5 % de cada uno de los elementos de una matriz 4 * 3 */




#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int matriz1[4][3], vector = 0;
    float calculo_porcentaje = 0, matriz2[4][3];


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]:";
            cin >> matriz1[i][j];
            calculo_porcentaje = matriz1[i][j] * 0.05;/*saca el porcentaje*/
            matriz2[i][j] = calculo_porcentaje;/*Guarda el porcentaje dentro de la segunda matriz*/

        }
    }
    cout << "\n";
    cout << "La matriz digitada es: \n";
    cout << "\n";
    /*Muestra los datos*/
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz1[i][j] << "   ";
        }
        cout << "\n";
    }
    /*Muestra la matriz*/
    cout << "\n";
    cout << "El calculo del 5% de la matriz es: \n";
    cout << "\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz2[i][j] << "%   ";
        }
        cout << "\n";
    }
    

    system("pause");
    return 0;

}
