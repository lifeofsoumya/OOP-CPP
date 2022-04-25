#include <iostream>
using namespace std;

class Base{

};

class Derived : public Base{

};

int main(){
    Base * base_pointer; // pointer points at base class object
    Base obj;
    Derived obdj;
    base_pointer = &obdj; // base class pointer pointing a derived class object
     
}