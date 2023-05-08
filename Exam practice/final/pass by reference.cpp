#include<iostream>
using namespace std;
//pass by reference

void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

//pass by pointer

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=10,b=20;
    swap(a,b);
    cout<<a<<","<<b<<endl;
    int x=20,y=21;
    swap(&x,&y);
    cout<<x<<","<<y<<endl;
    
    return 0;
}