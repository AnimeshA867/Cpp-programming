/*
 In C++, it is possible to overload a pre-defined operator as per the class. Overloading means providing a new meaning to the pre-existing function.

 The syntax for overloading operator is:
 return_type operator (args...){
    function-body;
 }
*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class String{
    private:
    int length;

    public:
    String(){
        cout<<"Enter the length:";
        cin>>length;
    }
    int operator +(String a){
        length+= a.length;
        return this->length;
    }
};

int main(){
String l1, l2;
int l3=l1+l2;
cout<<endl<<"The increased length is: "<<l3<<endl;

 return 0;
}