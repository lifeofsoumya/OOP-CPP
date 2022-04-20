#include <iostream>
using namespace std;
    
class A {
    public:
        int x = 2;
    };
    
class B: public virtual A {
    };
    
class C: public virtual A {
    };
    
class D: public B, public C {
    };
    
int main() {
        D d = D();
        cout << "x : " << d.x << endl;
    }