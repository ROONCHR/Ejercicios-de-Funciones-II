#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  float cateto1,cateto2,hipotenusa=0;
 
  cout << "Digite  el cateto 1(en u): ";
  cin >> cateto1;
  cout << "Digite cateto 2(en u): ";
  cin >> cateto2;
 
  hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
 
  cout << "La medida de la hipotenusa es " << hipotenusa<<" unidades " <<endl;
 
  return 0;
}
