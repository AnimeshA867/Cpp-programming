#include<iostream>
using namespace std;

int main(){
    try{

    long *a=new long[1000000000000000];

    }
    catch(bad_alloc&){
        cout<<"There was an error allocating such a large space."<<endl;
    }
}