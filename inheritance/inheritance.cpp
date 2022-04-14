#include<iostream>
using namespace std;

class Base{
        int a;
        int b;
        int mlp;
    public:
        Base(int a, int b){
        cout << a, b;
    }
        int mltiply( int a, int b){
            return (a*b);
        }
};

class derived: public Base{
    public:
};

int main(){
    derived obj;
    cout << "Multiplication: " << obj.mltiply(5,7) << endl;
}