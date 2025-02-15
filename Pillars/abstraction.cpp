#include<iostream>
using namespace std;
class implementAbstraction{
    private:
    int a, b;
    public:
    // here we are setting the values of a and b
    
    void set(int x, int y){
        a=x;
        b=y;
    }
    // a display function to display the function
    void display(){
        cout<<"a= " <<a<<endl;
        cout<<"b= " <<b<<endl;
    }
};
int main(){
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}