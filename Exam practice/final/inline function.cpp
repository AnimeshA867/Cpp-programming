//Inline function

#include<iostream>
using namespace std;
inline int sum(int a, int b){
    return a+b;
}

int main(){
    int a=10,b=20;

    cout<<sum(a,b)<<endl;
    
    return 0;
}