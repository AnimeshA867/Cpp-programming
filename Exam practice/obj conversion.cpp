#include<iostream>
using namespace std;

class distance1{
    int feet;
    int inch;

    public:
     public:
    distance1(){
        feet=inch=0;
    }
    distance1(int feet, int inch){
        this->feet=feet;
        this->inch=inch;
    }


        void displayinfeet(){
            cout<<"Feet: "<<feet<<" Inch:"<<inch<<endl;
        }
  
};

class dist{
    int meter, cent;

    public:
    dist(int m, int c){
        this->meter=m;
        this->cent=c;
    }
    operator distance1(){
  
        int f, i;

        f=meter*3.3;
        i=cent*0.4;
        f=f+f/12;
        i=i%12;
        return distance1(f,i);
    }
};

int main(){
    distance1 d1;
    dist d2(4,50);
    d1=d2;
    d1.displayinfeet();

    
    return 0;
}