#include<iostream>
using namespace std;

class Base{
        int a;
        int b;
    public:
        Base(int a, int b){
        cout << a, b;
    }
};

class derived: public Base{
        int c;
    public:
        derived(int c, int a, int b):Base(a, b){
            void getN(){
                cin >> c, a, b;
            };
        }
};

int main(){
    derived ob;
    ob.getN();
}