
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
    B(){
        cout<<"This is the constructor of B."<<endl;
    }
};
class C:A{
    public:
    C(){
        cout<<"This is the constructor of C."<<endl;
    }
};
class D:B,C{
    public:
    D(){
        cout<<"This is the constructor of D."<<endl;
    }
};

int main(){
    D b;
    return 0;
}