#include<iostream>
using namespace std;

class st{
    const int size;

    public:
    
    st(int sz):size(sz){}
    void print()const{
        
        cout<<size<<endl;
    }
};

int main(){
    st s(12);
    s.print();
    return 0;
}