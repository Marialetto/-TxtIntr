#include <iostream>
#include <cmath> // для функций atan(x)
#include <cstdlib> // для функций strtol, exit
#include <unistd.h> // для функции getopt
#define PI 3.14159265
using namespace std;
 void help(){
    std::cout << "Parametrs:\n -h help\n -t atg(x) in radians\n -d atg(x) in degrees\n -c actg(x) in radians\n -g actg(x) in degrees\n" ;
}
    
int main(int argc, char *argv[]) {
   int oper,x;
   while((oper = getopt(argc, argv, "tcdgx:h")) != -1) {  
        switch(oper) { 
            case 't':  
               	 	cout << "atg(x) = " << atan(x) << " radians"<< endl;
            break; 
            case 'd':
                	cout << "atg(x) = " << atan(x) * 180 / PI << " degrees" << endl;
            break; 	
            case 'c':  
               	 	cout << "actg(x) = " << PI/2 - atan(x) << " radians"<< endl;
            break;
            case 'g':
		         	cout << "actg(x) = " << (PI/2 - atan(x)) * 180 / PI  << " degrees" << endl;
            break; 	
            case 'h':
            help();
      		break;
      		default:
      		cout <<"-h:" << endl;
      		help();
      		exit(1);
      		}
      } 
    return 0;
}
