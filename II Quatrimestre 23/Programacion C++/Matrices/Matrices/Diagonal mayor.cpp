


#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

	int matriz[3][3], matriz2[3][3];

	//Guardando la informacION EN LA MATRIZ 1

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite un numero [" << i << "][" << j << "]:";
			cin >> matriz[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {
			cout << matriz[i][j] << "  ";
		}
		cout << "\n";
	}

	//Diagonal mayor
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				cout << matriz[i][j] << "  ";
			}
		}
	}



	system("pause");
	return 0;

}