#include <iostream>
//#include <string>
#include <cassert>

bool esPar(int);

int main()
{
    
    assert(esPar(5000));
    assert(!esPar(1001));
    assert(esPar(2));
    assert(esPar(0));
    assert(!esPar(1));
    assert(esPar(-2));
    assert(!esPar(-9));
    
    std::cout << "La funcion cumple todos los Requerimientos\n";
    int n;
    std::cout << "Ingrese un numero a evaluar:\n";
    std::cin >> n;
    std::cout << (esPar(3.14) ? "Su numero es par" : "Su numero es impar");
    std::cout << "hola" << "mundo";
    //esPar(3.14);
}

bool esPar(int n){
    return n%2==0;
}