#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int cantidad_de_numeros, numeromaximo;
	
	srand(time(0));
	
	cout << "Cantidad de numeros aleatorios a imprimir: ";
	cin >> cantidad_de_numeros;
	
	cout << "Numero maximo de numero aleatorio: ";
	cin >> numeromaximo;
	
	for(int i = 0; i < cantidad_de_numeros ; i++) {
		cout << rand() % numeromaximo << endl;
	}
	
	return 0;
}
