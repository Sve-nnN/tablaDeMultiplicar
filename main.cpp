#include <iostream>
using namespace std;
int validaNumero(){
  int i;
  do{
    cout<<"De que numero quieres la tabla?"<<endl;cin>> i;
  }while(i<1||i>9);
  
  return i;
}
void tablaMultiplicar(int &num){
  int i=0;
  while(i<=10){
      cout<< num <<"*"<<i<<" = "<<num*i<<endl;
      i++;
  }
}
int main() {
  int num = validaNumero();
  tablaMultiplicar(num);
  system("pause");
}