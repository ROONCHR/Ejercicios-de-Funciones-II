#include <iostream>
#include <math.h>
using namespace std;

void calcular_raices(float a, float b, float c, float &x1,float &x2,int &cant_soluciones){
	float solucion;
    solucion = (b*b) - (4*a*c); 
    if(solucion<0){
    	cant_soluciones=0;
	}else if(solucion==0){
    	x1 = (-b + sqrt(solucion)) / (2*a);
    	cant_soluciones=1;
	}else{
		x1 = (-b + sqrt(solucion)) / (2*a);
    	x2 = (-b - sqrt(solucion)) / (2*a);
        cant_soluciones=2;
	}
}

int main(){
	// ax2 + bx + c = 0
	
    float a, b, c, x1, x2;
    int cant_soluciones;
    cout<<"Hallamos las raices de una ecuacion cuadratica con la forma:"<<endl<<"	ax2 + bx + c = 0"<< endl<<"donde (x2) siginifica (exis elevado al cuadrado)"<<endl;

    cout<<"Ingresa el valor de a: "<<endl;
    cin>>a;
    
    cout<<"Ingresa el valor de b: "<<endl;
    cin>>b;
    
    cout<<"Ingresa el valor de c: "<<endl;
    cin>>c;
    calcular_raices(a,b,c,x1,x2,cant_soluciones);
    



if(cant_soluciones==0){
    	cout<<"La ecuacion"<<a<<"(x2) + "<<b<<"x + "<<c<<" = 0 "<<" no tiene soluciones reales. ";
	}else if(cant_soluciones==1){
    	cout<<"La ecuacion"<<a<<"(x2) + "<<b<<"x + "<<c<<" = 0 "<< " tiene solo una solucion, es: "<<x1<<endl;
	}else if(cant_soluciones==2){
        cout<<"La ecuacion"<<a<<"(x2) + "<<b<<"x + "<<c<<" = 0 "<< " tiene dos soluciones: "<<endl;
    	cout<<"x1 = "<<x1<<endl;
    	cout<<"x2 = "<<x2<<endl;
	}
	
	
	
	
    return 0;
}
