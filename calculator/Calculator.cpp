#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x; 
  char op,-g atgx,-g actgx,-rad atgx,-rad atgx,-help;
  const double PI = 3.141592653589793;
  cout << "Выберите операцию -g atg ,-rad atg ,-g actg, -rad atg или -help"; 
  cin>>op;
  cout << "Введите значение аргумента х"; 
  cin>>x;
  switch(op) { 
    case '-g atgx': 
     cout << "atg(x) = " << atan(x); << "в градусах" << endl;
     break; 
    case '-g actgx': 
      cout << "ctg(x) = " << 1/atan(x); << "в градусах" << endl;
      break; 
    case '-rad atgx': 
      cout << "atg(x) = " << atan (x * PI / 180) << "в радианах" << endl; 
      break; 
    case '-rad tgx': 
      cout << "aсtg(x) = " << 1/(atan (x * PI / 180)) << "в радианах" << endl; 
      break; 
   case '-help' and ' ': 
      cout <<"-g atgx - вычисляем тангенс угла в градусах /n";
      cout <<"-rad atgx- вычисляем тангенс угла в радианах /n";
      cout <<"-g actgx - вычисляем катангинс угла в градусах /n";
      cout <<"-rad atgx вычисляем катангинс угла в радианах"<< endl;  
      break; 
    return 0;
}
