/* Suppose we are using multiple inheritance or multipath inheritance.
    Let's consider two classes: class A and class B. Both of these classes have a member function name show(). The return type argument, everything in these two classes for the member function is the same. And we form another class C which is derived from both of these classes.
    If we use C object to call show function then it would cause ambiguity.
    
    The way to remove the ambiguity is: 
    Objname.className::member_function_name();

*/

#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"This is the show function from the class A."<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"This is the show function from the class B."<<endl;
    }
};

class C:public A,public B{
    public:
    void show(){
        cout<<"This is the show function from the class C."<<endl;
    }
};

int main(){
    C c;
    c.A::show();
    c.B::show();
    c.show();
    
    return 0;
}