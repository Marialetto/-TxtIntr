#include <iostream>
#include <cmath>
using namespace std;
enum operation {
    g_atgx, g_actgx, rad_atgx, rad_actgx, help
  };

int main(){
  double x; 
  const double PI = 3.141592653589793;
  cout << "Выберите операцию g_atgx ,rad_actgx ,g_actgx, rad_actgx или help"; 
  cout << "Введите значение аргумента х"; 
  cin >> operation;
  cin >> x;
  switch(operation) { 
    case g_atgx: 
     cout << "atg(x) = " << atan(x) << "в градусах" << endl;
     break; 
    case g_actgx: 
      cout << "actg(x) = " << 1/atan(x) << "в градусах" << endl;
      break; 
    case rad_atgx: 
      cout << "atg(x) = " << atan (x * PI / 180) << "в радианах" << endl; 
      break; 
    case rad_atgx: 
      cout << "aсtg(x) = " << 1/(atan (x * PI / 180)) << "в радианах" << endl; 
      break; 
   case help: 
      cout <<"g_atgx - вычисляем тангенс угла в градусах /n";
      cout <<"rad_atgx - вычисляем тангенс угла в радианах /n";
      cout <<"g_actgx - вычисляем катангинс угла в градусах /n";
      cout <<"rad atgx -  вычисляем катангинс угла в радианах"<< endl;  
      break; 
    default:
      cout <<"help:- /n";
      cout <<"g_atgx - вычисляем тангенс угла в градусах /n";
      cout <<"rad_atgx - вычисляем тангенс угла в радианах /n";
      cout <<"g_actgx- вычисляем катангинс угла в градусах /n";
      cout <<"rad_actgx -  вычисляем катангинс угла в радианах"<< endl; 
      break; 
  }
    return 0;
}
