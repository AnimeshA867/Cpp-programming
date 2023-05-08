#include<iostream>
#include<string>
using namespace std;

class student{
    int roll;
    string name;

    public:

    friend  void operator >>(istream&, student&);
    friend void operator << (ostream&, student&);
};

void  operator >> (istream& in, student& s){
    in>>s.roll;
    getline(in>>ws,s.name);
}

void  operator <<(ostream& out, student& s){
    out<<"Name: "<<s.name<<" Roll no.: "<<s.roll<<endl;
}

int main(){
    student s;
    cout<<"Enter the roll no and name respectively:"<<endl;
    cin>>s;
    cout<<s;
    
return 0;
}