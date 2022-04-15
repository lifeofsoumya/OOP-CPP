#include<iostream>
using namespace std;

class base {
    public:
        base(){
            cout << " Constructor of base called" << endl;
        }
        ~base(){
            cout << " Destructor off base called" << endl;
        }
};

class derived : public base {
    public:
        derived(){
            cout << " Constructor of Derived called" << endl;
        }
        ~derived(){
            cout << " Destructor of derived called" << endl;
        }
};

main(){
    derived x;

    cout << "Constructors called, half done....." << endl;
}

/* Expected Output:

    constructor of base called
    Constructor of Derived called
    Constructors called, half done.....
    Destructor of derived called
    Destructor off base called
    
*/
