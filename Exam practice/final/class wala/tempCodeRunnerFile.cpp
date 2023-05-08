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
    int getcm(){
        return cm;
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

   dist2(dist d){
    int cm= d.getcm();
    meter=cm/100;
   }
   void display(){
    cout<<"Meter:"<<meter<<endl;
   }
};

int main(){
    dist d(12);
    dist2 d1=d;
   
   d1.display();

    
    return 0;
}