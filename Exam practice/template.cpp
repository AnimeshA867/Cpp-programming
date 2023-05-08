#include<iostream>
using namespace std;

template<class T>

void swap1( T &a, T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=10,b=20;
    char c='a',d='e';
    swap1(a,b);
    cout<<a<<b<<endl;
    
    return 0;
}