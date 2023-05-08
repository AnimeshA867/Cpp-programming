#include<iostream>
#include<string>
using namespace std;

class student{
    int roll;
    string name;

    public:
    friend void operator << (ostream&, student&);
    friend void operator >>(istream&, student&);
};

void operator <<( ostream& out, student& s){
    out<<"The name of the student is: "<<s.name<<endl;
    out<<"The roll no. of the student is: "<<s.roll<<endl;
}

void operator >>(istream& in, student& s){
    cout<<"Enter the name of the student:"<<endl;
    getline(in>>ws,s.name);
    cout<<"Enter the roll no. of the student:"<<endl;
    cin>>s.roll;
}

int main(){
    student s;
    cin>>s;
    cout<<s;
    return 0;
}