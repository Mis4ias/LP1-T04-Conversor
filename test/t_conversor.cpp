#include "conversor.h"
#include <iostream>
#include <cassert>
#include <math.h>
#include <cmath>

using namespace std;

int main (int argc, char * argv[]){
    cout << "Testando conversao de Celsius para Fahrenheit.." << endl;
   	// fabsf  consertar o ponto flutuante fabsf(_-10.4)<0.01
    assert((fabs(celsius2Fahrenheit(-12)) - 10.4) < 0.01);
    assert((fabs(celsius2Fahrenheit(0)) - 32) < 0.01);
    assert((fabs(celsius2Fahrenheit(3)) - 37.4) < 0.01);
    assert((fabs(celsius2Fahrenheit(8)) - 46.4) < 0.01);
    assert((fabs(celsius2Fahrenheit(15)) - 59) < 0.01);
    assert((fabs(celsius2Fahrenheit(23)) - 73.4) < 0.01);
 
 	cout << "Testando conversao de Fahrenheit para Celsius.." << endl;
    assert(fahrenheit2Celsius(32)==0) ;
    
    return 0;
}


