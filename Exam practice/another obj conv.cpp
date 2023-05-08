#include<iostream>
using namespace std;

class distance1{
      int meter, cent;

    public:
    distance1(int m, int c){
        this->meter=m;
        this->cent=c;
    }
    int getmeter(){
        return meter;

    }
    int getcent(){
        return cent;
    }
};

class dist{
  int feet;
    int inch;

    public:
     public:
    dist(){
        feet=inch=0;
    }
    dist(int feet, int inch){
        this->feet=feet;
        this->inch=inch;
    
    }
    dist(distance1 d1){
        int m=d1.getmeter();
        int cm=d1.getcent();
        this->feet=m*3.3;
        this->inch=cm*0.4;
        feet+=inch/12;
        inch=inch%12;

    }
    void displayinfeet(){
            cout<<"Feet: "<<feet<<" Inch:"<<inch<<endl;
        }
};

int main(){
    distance1 d1(4,50);
    dist d2;
    d2=d1;
    d2.displayinfeet();

    
    return 0;
}