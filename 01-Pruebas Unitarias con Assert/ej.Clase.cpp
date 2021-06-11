#include <iostream>
#include <string>
#include <cassert>
 
using namespace std;
using namespace std::literals;
//using namespace std::string_literals;

float f3(float);
//float f3(float x){return (-3<=x && x<=3) ? -x : x; }

int main()
{
    assert(-4 == f3(-4));
    assert(4 == f3(4));
    assert(3 == f3(-3));
    assert(-3 == f3(3));
    assert(1 == f3(-1));
    assert(-1 == f3(1));
    cout << "La funcion cumple los Requerimientos";
    //float f3(float x){}
};

