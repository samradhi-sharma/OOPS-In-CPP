// function overloading

#include <iostream>
using namespace std;

class Geeks{
    public:
    void add(int a, int b){
        cout<<"integer sum=" <<a+b<<endl;
    }
    void add(double a, double b){
        cout<<"float sum=" <<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"integer sum=" <<a+b+c<<endl;
    }
};

int main(){
    Geeks gfg;
    gfg.add(10,2);
    gfg.add(10.5, 2.5);
    gfg.add(10, 2, 5);

    return 0;
}

// 3 functions with same name but different parameters
// function overloading is a type of polymorphism