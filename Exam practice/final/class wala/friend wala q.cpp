//WAP to multiply any two private numbers of two different classes using friend function

#include<iostream>
using namespace std;

class B;

class A{
    int x;

    public:
    A(int x){
        this->x=x;
    }
    A(){
        x=0;
    }
    friend int multiply (A &, B &);
};
class B{
    int x;

    public:
    B(int x){
        this->x=x;
    }
    B(){
        x=0;
    }
    friend int multiply (A&, B&);
};

int multiply(A &a, B &b){
    return a.x*b.x;
}

int main(){
    A a(12);
    B b(10);
    cout<<multiply(a,b)<<endl;
    
    return 0;
}

