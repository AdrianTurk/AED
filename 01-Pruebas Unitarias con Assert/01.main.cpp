#include <iostream>
#include <string>
#include <cassert>
 
using namespace std;
 
int main()
{
    //Strings
    assert(string("texto1") + string("texto2") == "texto1texto2");  // No debería???
    assert(string("TextoLargo").at(3)=='t');
    assert(string("TEXTO").length()==5);
    
    // strings Alternativo:
    assert("texto1"s + "texto2"s == "texto1texto2");    // Tampoco Debería? Tiene pinta de operator overloading en OOP  <- La mas natural? es valido para toda las imples?
    
    assert(("texto1"s + "texto2"s).compare("texto1texto2") == 0); 
    assert(!("texto1"s + "texto2"s).compare("texto1texto2"));  //Tricky pero moy feo y poco legible :C

    
    assert(("cadena1" "cadena2")=="cadena1cadena2");
    assert(string("cadena1" "cadena2").compare("cadena1cadena2") == 0); // Ashco :[

    assert("Cadena1"=="Cadena1");           //En alguna imple podria ser false? en c deberia!!?
    assert("Cadena1"s=="Cadena1"s);         //Es correcto? dependo de OOP?
    
    assert("TextoLargo"s.at(3)=='t');
    assert("TEXTO"s.length()==5);
    
    //char
    assert('a'+1=='b');
    assert('1'+2=='3');
    assert('0'+1=='1');
    //assert(('0'++) =='1');                  //Why Don't Work :Z
    assert('0'==48);                       //Tabla ascci std?
    assert('a'==97);
    assert(char(255)+1==0);                // Los char son de 8 bits? 

    //int
    assert(2*45==90);
    assert(25-25==0);
    assert(555-55==500);
    assert(255*255==2^16);
    assert(2^16/2^16==1);
    assert(20/6==3);
    assert(299999/200000==1);     // truncados
    assert(0-2==-2);
    assert(5 * -2 == -10);

    //assert( (-2)++ == -1);        not working. Why? :C

    //uint
    assert(32500 - 200000U == 4294799796);
    assert(0 - 2u == 4294967294);
    assert(5u * -2 == 4294967286);
    assert(4294967295u + 1 == 0 );          // es el uint predeterminado uint32?
    
    //Boundaries - Evitando sizeof()

    assert('\0' - 1 == -1);                      // los char son de 16? :C
    //Solo extenciones de c++ de ms
    //cout<< 0i8;

    assert(0u -1 == 4294967295);                    // Pero acaso no existe mas el uint de 16 :C ???
    assert(0ul - 1 == 4294967295ul );               // Ulong de 32 bits?
    assert(0ull - 1 == 18446744073709551615ul) ;    // ulonglong de 64?

    //bool
    assert(true == !false);
    assert(false == !true);
    assert((true && true) == true);
    assert((false && false) == false);
    assert((false || true) == true);
    assert((0 == 0));
    assert(!(1==-1));

    //Double: EPSILON = 0.00001

    assert(1./3 - 0.3333 < 0.0001);
    assert(25./3 - 8.3333 < 0.0001);
    assert(11./-7 - 1.5714 < 0.0001);
    
    cout << "La casa esta en orden";
}