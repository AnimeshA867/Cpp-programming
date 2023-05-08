#include<iostream>
using namespace std;

class data1{
    int len;

    public:
    data1(int len){
        this->len=len;
    }
    data1(data1& d){
        this->len=d.len;
    }
    void display(){
        cout<<"Len:"<<len<<endl;
    }
};

int main(){
    data1 d1(12),d2=d1;
d1.display();
d2.display();
    
    return 0;
}