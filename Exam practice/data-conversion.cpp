#include<iostream>
using namespace std;

class distance1{
    int feet, inch,meter;

    public:
    distance1(){
        feet=inch=0;
    }
    distance1(int feet, int inch){
        this->feet=feet;
        this->inch=inch;
    }

    distance1(float meter){
        feet=int(meter);
        inch=12*(meter-feet);
        }

        void displayinfeet(){
            cout<<"Feet: "<<feet<<" Inch:"<<inch<<endl;
        }
        void displayinmeter(){
            cout<<"Meter:"<<meter<<endl;
        }
        operator float(){
            meter=feet+(float)inch/12;
        }
};

int main(){
    distance1 d1(12.23), d2(12,23);
    d1.displayinfeet();
    (float)d2;
    d2.displayinmeter();
    
    return 0;
}