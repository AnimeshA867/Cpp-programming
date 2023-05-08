#include<iostream>
using namespace std;

class sample1{
    int x;

    public:
    sample1(){
        x=0;
    }
    sample1(int x){
        this->x=x;
    }
    friend class sample2;
};

class sample2{
    int y;

    public:
    sample2(){
        y=0;

    }
    sample2(int y){
        this->y=y;
    }

    void mul(sample1 s){
        cout<<s.x*y<<endl;
    }
};

int main(){
    sample1 s(10);
    sample2 s1(11);

    s1.mul(s);
}