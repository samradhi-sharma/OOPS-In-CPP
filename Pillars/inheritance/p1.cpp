#include<iostream>
using namespace std;
class Base{
    private:
    int privateVar = 100;
    public:
    int getPrivateVar(){
        return privateVar;

    }
};
class Derived: public Base{
    public:
    void show(){
        // cout<<privateVar; // this will give an error
        cout<<getPrivateVar();
    }
};
int main(){
    Derived d;
    d.show();
    return 0;
}