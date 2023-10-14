/*3.Desarrolle un programa en C++ que permita ingresar y almacenar 10 números enteros
positivos. Calcular y mostrar el menor y el mayor número ingresado. Utilices vectores.*/


#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int numero[10], mayor = 0, menor = 0, suma = 0;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese el numero " << (i + 1) << " : ";
            cin >> numero[i];
            if (numero[i] <= 0) {
                cout << "El numero debe ser mayor que cero... Error!!!\n";
            }
        } while (numero[i] <= 0);
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (0 == i) {
            mayor = numero[i];
            menor = numero[i];
        }
        else if (numero[i] > mayor) {
            mayor = numero[i];
        }
        else if (numero[i] < menor) {
            menor = numero[i];
        }
        suma += numero[i];
    }
    cout << "El numero menor es: " << menor << endl;
    cout << "El numero mayor es: " << mayor << endl;


    system("pause");
    return 0;
}