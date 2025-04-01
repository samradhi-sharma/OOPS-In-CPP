#include <cstring>
#include <iostream>
using namespace std;

class String{
    char* s;
    public:
    String(const char* str){
        s= new char[strlen(str) + 1];
        strcpy(s, str);
    }
    String(const String& source){
        s = new char[strlen(source.s)+1];
        strcpy(s, source.s);

    }
    void change(const char* str){
        delete[]s;
        s=new char[strlen(str)+1];
        strcpy(s, str);

    }
    void print(){
        cout<<s<<endl;
    }

    ~String(){
        delete[] s;
    }
};
int main(){
    String str1("hello");
    String str2(str1);

    str1.print();
    str2.print();

    str2.change("world");

    str1.print();
    str2.print();
    
}