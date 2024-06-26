#include <iostream>
#include <math.h>
using namespace std;

int main(void){
	// ax2 + bx + c = 0
	
    float a, b, c, x1, x2, solucion;
    cout<<"Hallamos las raices de una ecuacion cuadratica con la forma:"<<endl<<"	ax2 + bx + c = 0"<< endl;

    cout<<"Ingresa el valor de a: "<<endl;
    cin>>a;
    
    cout<<"Ingresa el valor de b: "<<endl;
    cin>>b;
    
    cout<<"Ingresa el valor de c: "<<endl;
    cin>>c;
    
    
    solucion = (b*b) - (4*a*c); 
    if(solucion<0){
    	cout<<"La ecuacion no tiene soluciones reales. ";
	}else if(solucion==0){
    	x1 = (-b + sqrt(solucion)) / (2*a);
    	cout<<"la ecuacion tiene solo una solucion, es: "<<x1<<endl;
	}else{
		x1 = (-b + sqrt(solucion)) / (2*a);
    	x2 = (-b - sqrt(solucion)) / (2*a);
        cout<<"la ecuacion tiene dos soluciones: "<<endl;
    	cout<<"x1 = "<<x1<<endl;
    	cout<<"x2 = "<<x2<<endl;
	}
    

    return 0;
}
