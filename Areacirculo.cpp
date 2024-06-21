#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double radio){
	
	double pi = M_PI;
	return pi * pow(radio, 2);
}

int main() {
	double radio, area_circulo,respuesta;
	cout<< "Quieres hallar el area del circulo?"<<endl<<"1. Si"<<endl<<"0. No"<<endl;
	cin >>respuesta;
	while(respuesta==1){
	
	cout << "Ingrese el radio en metros: ";
	cin >> radio;
	
	
	area_circulo = calcularArea(radio);
	
	cout << "El area del circulo es: " << area_circulo<<endl<<endl;
	cout<<"continuar operando?"<<endl<<"1. Si"<<endl<<"0. No"<<endl;
	cin>>respuesta;
	}
	return 0;
}
