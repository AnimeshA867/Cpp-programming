#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is of class A."<<endl;
    }
};
class D{
    public:
    D(){
        cout<<"This is of class D."<<endl;
    }
};

class B: D,A{
    public:
    B():D(),A(){
        cout<<"This is of class B."<<endl;
    }
};

int main(){
    B b;
    
    return 0;
}