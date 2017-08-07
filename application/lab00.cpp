#include <stdio.h>
#include "conversor.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    int opcao; // Opcao a ser digitada pelo usuario 
    float temp; // Temperatura a ser convertida

    cout << "Conversor de temperatura Celsius <-> Fahrenheit" << endl;
    cout << "(1) Converter de graus Celsius para graus Fahrenheit" << endl; 
    cout << "(2) Converter de graus Fahrenheit para graus Celsius" << endl; 
    cout << "Digite sua opcao: ";
    cin >> opcao;
    cout << "Digite sua temperatura: ";
    cin >> temp;
    
    if(opcao==1){
    	cout << celsius2Fahrenheit(temp);
    }
    if(opcao==2){
       	cout << fahrenheit2Celsius(temp);
    }

    
    return 0;
}

