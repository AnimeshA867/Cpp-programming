#include<iostream>
using namespace std;

int& min(int &x, int &y){
    if(x>y){
        return y;

    }
    else{
        return x;
    }
}

int main(){
    int x=20,y=12;

    min(x,y)=0;

    cout<<x<<","<<y<<endl;
}