#include "conversor.h"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

int main (int argc, char * argv[]) {

    cout << "Testando conversao de Celsius para Fahrenheit.." << endl;
    assert(celsius2Fahrenheit(-12) == 10.4);
    assert(celsius2Fahrenheit(0) == 32);
    assert(celsius2Fahrenheit(3) == 37.4);
    assert(celsius2Fahrenheit(8) == 46.4);
    assert(celsius2Fahrenheit(15) == 59);
    assert(celsius2Fahrenheit(23) == 73.4);
 
    cout << "Testando conversao de Fahrenheit para Celsius.." << endl;
    assert(fahrenheit2Celsius(32) == 0);
    // Escreva outros casos de teste
    return 0;

}
