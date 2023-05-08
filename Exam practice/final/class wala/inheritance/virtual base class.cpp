
#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"This is the constructor of A."<<endl;
    }
};
class B:virtual public A{
    public:
    B(){
        cout<<"This is the constructor of B."<<endl;
    }
};
class C:virtual public A{
    public:
    C(){
        cout<<"This is the constructor of C."<<endl;
    }
};
class D:public B, public C{
    public:
    D(){
        cout<<"This is the constructor of D."<<endl;
    }
};

int main(){
    D b;
    b.display(); 
    return 0;
}