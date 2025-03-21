#include<iostream>
using namespace std;

class Person{
    int socialID;
    string name;

public:
    Person(string n, int id){
        name = n;
        socialID = id;
    }
    string getName(){
        return name;
    }
    bool validateID(){
        if(socialID <= 1001 && socialID>=0)
        return true;
        else
        return  false;  
    }
};

int main(){
    Person p1("John", 1000);
    if(!p1.validateID())cout<<"Invalid ID"<<endl;
    else
    cout<<p1.getName()<<endl;
}