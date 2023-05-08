/*
    A function of a derived class can be called with the help of object of it's base class. In addition. it can be manipulated through an address of the base type. Taking the address of an object and treating it as the address of the base type is call up-casting.
*/

#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"Hey there!"<<endl;
    }
   void show(){}
};

class derived:public base{
    public:
    void display(){
        cout<<"Hey there Delilah!"<<endl;
    }
    void show(){
        cout<<"HEy "<<endl;
    }
};

int main(){
    base *bptr, b;
    derived d;

    bptr=&b;
    bptr->display();

    bptr =&d;
    bptr->display();
    bptr->show();
    
    return 0;
}