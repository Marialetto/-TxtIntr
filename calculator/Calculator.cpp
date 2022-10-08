#include <iostream>
#include <cmath>
using namespace std;
enum operation {
    dec_atgx, dec_actgx, rad_atgx, rad_actgx, help
  };

int main(){
  double x; 
  const double PI = 3.141592653589793;
  cout << "Выберите операцию dec_atgx ,rad_actgx ,dec_actgx, rad_actgx или help"; 
  cout << "Введите значение аргумента х"; 
  cin >> operation;
  cin >> x;
  switch(operation) { 
    case dec_atgx: 
     cout << "atg(x) = " << atan(x) << "в градусах" << endl;
     break; 
    case dec_actgx: 
      cout << "actg(x) = " << 1/atan(x) << "в градусах" << endl;
      break; 
    case rad_atgx: 
      cout << "atg(x) = " << atan (x * PI / 180) << "в радианах" << endl; 
      break; 
    case rad_actgx: 
      cout << "aсtg(x) = " << 1/(atan (x * PI / 180)) << "в радианах" << endl; 
      break; 
   case help: 
      cout <<"dec_atgx - вычисляем тангенс угла в градусах /n";
      cout <<"rad_atgx - вычисляем тангенс угла в радианах /n";
      cout <<"dec_actgx - вычисляем катангинс угла в градусах /n";
      cout <<"rad_actgx -  вычисляем катангинс угла в радианах"<< endl;  
      break; 
    default:
      cout <<"help:- /n";
      cout <<"dec_atgx - вычисляем тангенс угла в градусах /n";
      cout <<"rad_atgx - вычисляем тангенс угла в радианах /n";
      cout <<"dec_actgx- вычисляем катангинс угла в градусах /n";
      cout <<"rad_actgx -  вычисляем катангинс угла в радианах"<< endl; 
      break; 
  }
    return 0;
}
