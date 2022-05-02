#include<iostream>
using namespace std;

template <class x> void func(x a){
    cout << "executing first function with single argument\n";
}

template <class x, class y> void func(x a, y b){
    cout << "executing the second function with double argument\n";
}

void func(int a){
    cout << "first priority to functions with defined data type\n"; // If there is any function with same name and does provide a defined data type, it will have higher priority
}

int main() {
    func(3);
    func(4,4);
}