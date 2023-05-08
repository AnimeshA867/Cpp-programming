#include<iostream>
using namespace std;

int* smaller(int *x, int *y){
    return (*x>*y)?y:x;
}

int main(){
    int a=10,b=12;
    cout<<*(smaller(&a,&b))<<endl;
    return 0;
    
}