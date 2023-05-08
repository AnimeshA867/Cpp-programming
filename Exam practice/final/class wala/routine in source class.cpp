#include<iostream>
using namespace std;

class dist{
    int cm;

    public:
    dist(){
        cm=0;
    }
    dist(int cm){
        this->cm=cm;
    }
    void display(){
        cout<<"Cm:"<<cm<<endl;
    }
};

class dist2{
    int meter;

    public:
    dist2(){
        meter=0;
    }
    dist2(int meter){
        this->meter=meter;
    }

    operator dist(){
        dist d;
        int cm;
    cm=meter*100;
    return dist(cm);

    }
};

int main(){
    dist d(12),d2;
    dist2 d1(12);
    d.display();
    d2=(dist)d1;
    d2.display();

    
    return 0;
}