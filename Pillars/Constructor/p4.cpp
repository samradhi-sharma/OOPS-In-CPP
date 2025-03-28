#include<iostream>
using namespace std;

class A{
    public:
    int x;
};

int main(){
    // a1 is an object of class A
    A a1;
    a1.x=10;
    cout<<a1.x<<endl;

    // creating another object using a1
    // copy constructor calling
    A a2(a1);
    cout<<a2.x<<endl;

    return 0;


}

// OBSERVATION:
// since there's no user-defined constructor, the compiler automatically provides:
// 1. default constructor -> which initializes objects without arguments
// 2. copy constructor -> creates a copy of an object when another object is initialized with it