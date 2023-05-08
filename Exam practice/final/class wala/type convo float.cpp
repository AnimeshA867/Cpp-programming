//This is a program to illustrate the type conversion from user defined to basic data type.
#include<iostream>
using namespace std;

class typeConv{
    int meter;
    float centimeter;
   

    public:
    typeConv(){
      meter=centimeter=0;
    }
    typeConv(int meter,float centimeter){
        this->meter=meter;
        this->centimeter=centimeter;
    }
    
    operator float(){
       float a=(float)((float)meter+(float)(centimeter/100));
       return a;
    }

    
};

int main(){
    typeConv d(2,300);
    float di=(float)d;
    cout<<di<<endl;
    return 0;
}