// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
    private:
        int pvt = 1;

    protected:
        int prot = 2;

    public:
        int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
    public:
        // function to access protected member from Base
        int getProt() {
            return prot;
        }
};

int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}

// Expected Output: 

    // Private = 1
    // Protected = 2
    // Public = 3


// If the derived class is of Protected type -- The public also becomes directly inaccessable

class ProtectedDerived : protected Base {
    public:
        // function to access protected member from Base
        int getProt() {
            return prot;
        }

        // function to access public member from Base
        int getPub() {
            return pub;
        }
};

// Direct call like previous method ## cout << "Public = " << object1.pub; ## would throw an error

// It's better to use the function getPub() which is written inside the protected class



// When the derived class is of Private type -- Scenario becomes different

class PrivateDerived : private Base {
    public:
        // function to access protected member from Base
        int getProt() {
            return prot;
        }

        // function to access private member
        int getPub() {
            return pub;
        }
};

// The getPVT() function must be written in the derived class instead of Base class to access the Private variable