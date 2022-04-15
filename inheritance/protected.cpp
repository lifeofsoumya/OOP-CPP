#include <iostream>
#include <string>

using namespace std;

// Base class animal
class Animal {

    private:
        string color;

    protected:
        string type;

    public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }

        void setColor(string clr) {
            color = clr;    // modifies a private member string variable
        }

        string getColor() {
            return color;   // returns a string value of animal's color
        }
};

// derived class
class Dog : public Animal {

    public:
        void setType(string tp) {
            type = tp;      // modifies a protected member string variable
        }

        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }

        void bark() {
            cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}