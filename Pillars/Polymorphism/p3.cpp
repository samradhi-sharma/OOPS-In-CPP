#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"base class function";
    }
};
class Derived : public Base{
    public:
    void display() override{
        cout<<"derived class function";
    }
};
int main(){
    Base* baseptr;
    Derived derivedObj;
    baseptr = &derivedObj;
    baseptr->display();
    return 0;
}