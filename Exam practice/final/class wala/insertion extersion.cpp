#include<iostream>
using namespace std;

class overload{
    int x;

    public:
    friend void operator >>( istream &in,overload &o);
    friend void operator <<(ostream &out,overload &o);
};

void operator >> ( istream &in,overload &o){
    in>>o.x;
}
void operator <<(ostream &out,overload &o){
    out<<o.x<<endl;
}

int main(){
    overload o;
    cin>>o;
    cout<<o;
    
    return 0;
}