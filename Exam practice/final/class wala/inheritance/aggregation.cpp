/*
    Basically Aggregation is when object of a class is created inside another class.

    Suppose we create a class named dog. Another class is created with the name bulldog. As bulldog is a kind of a dog, then we can create data of dog with the help of object of dog.

*/

#include<iostream>
using namespace std;

class dog{
    string type;
    public:
    void getdata(){
        cout<<"Enter the type of the dog:"<<endl;
        getline(cin>>ws,type);
    }
    void display(){
        cout<<"Type: "<<type<<endl;
    }
};

class bulldog{
    string name;
    public:
    dog d;
    void getData(){
        d.getdata();
        cout<<"Enter the name of the bulldog:"<<endl;
        getline(cin>>ws,name);

    }
    void display(){
        cout<<"Name:"<<name<<endl;
        d.display();
    }

};

int main(){
    bulldog b;
    b.getData();
    b.display();
    
    return 0;
}