#include<iostream>
#include<list>
#include <iterator>
using namespace std;

class Distance{
    private: 
    int feet;
    float inches; 

    public:
    void setdistance( int ft, float in)
    { feet = ft; inches = in;}

    void getdistance(){
        cout << "Enter Feet: "; cin >> feet;
        cout << "Enter Inches: "; cin >> inches;
    }
    void showdist(){
        cout << "Feet:" << feet << endl;
        cout << "Inches:" << inches;
    };
};

class counter{
    private: 
        unsigned int count;
    
    public:
    counter(): count(0){
        unsigned int get_count()
            {return count;}
        void operator++()
            { ++count}
    };
};
    int main(){
        counter c1, c2;
        // std::list objects = {c1, c2};
        // for (int i= objects.begin(); i!=objects.end(); i++){}
        cout << "Value of c1 is: " << c1 << "\n";
        cout << "Value of c2 is: " << c2 << "\n";
        ++c1;
        ++c1;
        ++c2;
    }