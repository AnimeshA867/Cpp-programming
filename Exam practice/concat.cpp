#include<iostream>
#include<string>
using namespace std;

class strings{
    string str;

    public:
    strings(string s){
        this->str=s;
    }
    string operator +(strings s1){
        return this->str.append(s1.str);
    }
    void display(){
        cout<<str;
    }
};

int main(){
    strings s("Animesh"), s2("Acharya");
    s+s2;
    s.display();
    return 0;
}