#include<iostream>
using namespace std;

int& min(int &x, int &y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int a=12, b=123;
    min(a,b)=0;
    cout<<"a: "<<a<<" b:"<<b<<endl;
    
    return 0;
}