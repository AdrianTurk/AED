#include <iostream>
#include <string>
#include <cassert>
 
using namespace std;
 
int main()
{
    //Strings
    assert(string("texto1") + string("texto2") == "texto1texto2");
    assert(string("TextoLargo").at(3)=='t');
    assert(string("TEXTO").length()==5);
    
    // strings Alternativo:
    assert("texto1"s + "texto2"s == "texto1texto2");
    assert("TextoLargo"s.at(3)=='t');
    assert("TEXTO"s.length()==5);

    //char
    assert('a'+1=='b');
    assert('1'+2=='3');
    assert('0'+1=='1');
    assert('0'==48);        
    assert('a'==97);

    //int
    assert(2*45==90);
    assert(25-25==0);
    assert(555-55==500);
    assert(255*255==2^16);
    assert(2^16/2^16==1);
    assert(20/6==3);
    assert(299999/200000==1);     //trunca?
    assert(0-2==-2);
    assert(5 * -2 == -10);

    //assert( (-2)++ == -1);        why? :C

    //uint
    assert(32500 - 200000U == 4294799796);
    assert(0 - 2U == 4294967294);
    assert(5u * -2 == 4294967286);

    //bool
    assert(true == !false);
    assert(false == !true);
    assert((true && true) == true);
    assert((false && false) == false);
    assert((false || true) == true);
    
    //Long
    assert(0.25/0.25 ==1 );
    assert(0.25/-0.25 == -1);
    assert(0.750001 > 3L /4 > 0.7499999);
    
    assert(0.3333333333> 1/3 >0.33333333333);
    assert(0.666> 2/3 >0.6666);

    assert(1.0/2.0 == 0.5);
    cout << string((1l/10) + (1l/10));

     cout << int('a');
    //cout << 65536 + 65536;

}