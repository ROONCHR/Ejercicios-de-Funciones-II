#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int selecciona, numero,i=1,contador=0, contadorcpu=0;
	
	srand(time(0));
	
    cout<<"Juguemos al mejor de tres:"<<endl<<" selecciona una opcion: 1)Piedra 2)Papel 3)Tijera: " <<endl;
    

	while(i<=3){
	cout<<"elige: ";
	cin >> selecciona;	
	numero = (rand()%2)+1;
	if(selecciona==1) {
		cout <<"tu: piedra vs ";
	} else if(selecciona==2){
		cout<<"tu: papel vs ";
	}else{
		cout<<"tu: tijera vs ";
	}
	if(numero==1){
		cout<<"cpu: piedra"<<endl;
	}else if(numero==2){
		cout<<"cpu: papel"<<endl;
	}else{
		cout<<"cpu: tijera"<<endl;
	}
		if(selecciona==2 && numero==1) {
			cout <<"Ganaste"<<endl;
			contador=contador+1;
		} else if(selecciona==3 && numero==2) {
			cout << "Ganaste"<<endl;
			contador=contador+1;
		} else if(selecciona==1 && numero==3) {
			cout <<"Ganaste"<<endl;
			contador=contador+1;
		} else if(selecciona==numero){
			if(selecciona==1){
				cout << "Empate"<<endl;
			}else if(selecciona==2){
				cout << "Empate"<<endl;	
			}else{
				cout <<"Empate"<<endl;
			}
			
		} else {
	    	cout << "Perdiste"<<endl;
	    	contadorcpu=contadorcpu+1;
		}
		i++;
		
	}
	cout<<"_______________________________"<<endl;
	if(contadorcpu==contador){
		cout<<"cpu: "<<contadorcpu<<endl<<"jugador: "<<contador<<endl<<"EMPATARON";
	}else if(contadorcpu<contador){
		cout<<"cpu: "<<contadorcpu<<endl<<"jugador: "<<contador<<endl<<"ERES EL GANADOR";
	}else{
		cout<<"cpu: "<<contadorcpu<<endl<<"jugador: "<<contador<<endl<<"PERDISTE";
	}
	
	
	return 0;
}
