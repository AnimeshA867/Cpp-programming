//In single inheritance, derived class is derived from only one base class.
#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"This is the constructor of A."<<endl;
    }
};
class B:A{
    public:
    B():A(){
        cout<<"This is the constructor of B."<<endl;
    }
};

int main(){
    B b;
    return 0;
}