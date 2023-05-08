#include<iostream>
using namespace std;


class overload{
    int x;

    public:
    overload(){
        x=0;
    }
    overload(int x){
        this->x=x;
    }
   friend void operator ++(overload&,int);

    void display(){
        cout<<x<<endl;
    }
};
void operator ++(overload &o,int){
    o.x++;
}

int main(){
    overload o(10);
    o.display();
    o++;
    o.display();
    return 0;
}