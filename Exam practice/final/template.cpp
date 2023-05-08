#include<iostream>
using namespace std;

template<class T>

T reverse(T n){
    T temp;
    while(n!=0){
        temp=temp*10+n%10;
        n/=10;
    }
    return temp;
}

int main(){
    float a=123223.12;

    cout<<reverse(a)<<endl;
    
    return 0;
}