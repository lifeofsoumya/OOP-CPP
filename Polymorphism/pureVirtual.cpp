#include <iostream>
using namespace std;

class Base {
    public:
    virtual void Disp() = 0; // pure virtual class is declared, thus making the class an abstract class
};

class Derived : public Base {
    public:
    void Disp() {
        cout << "Derived From Base" << endl; // defining function tasks inside derived class thus not an abstract class
    }
};

int main(){
    Derived obj; // Directly creating object from derived class
    obj.Disp();
    return 0;
};

// Expected Output: 
    // Derived From Base


// Else Base object can be created without errors by using pointers
int main(){
    Base *Ptr; // pointer is of Base class
    Derived obj; // object is of Derived class
    Ptr = &obj; // pointing towards derived class object
    Ptr->Disp();
    return 0;
}