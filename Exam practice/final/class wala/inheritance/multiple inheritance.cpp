//In multiple inheritance, derived class is derived from multiple base class.
#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"This is the constructor of A."<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"This is the constructor of B."<<endl;
    }
};
class C:B,A{
    public:
    C():B(),A(){
        cout<<"This is the constructor of C."<<endl;
    }
};

int main(){
    C b;
    return 0;
}