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
            cout << "I am a " << type << endl;      // prints the type set by setType() function
            cout << "My color is " << c << endl;
        }

        void bark() {
            cout << "I can bark! Woof woof!!" << endl;      // signature move of an animal added
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

    dog1.displayInfo(dog1.getColor()); // after receiving data from return of getColor() it uses as a string to displayInfo() function which receives a string

    return 0;
}

/* Expected Output:

    I can eat!
    I can sleep!
    I can bark! Woof woof!!
    I am a mammal
    My color is black
    
*/