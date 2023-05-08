#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number:";
    cin>>n;
    try{
        if(n<0){
            throw n;
        }else{
            if(n%2==0){
                cout<<"The number is an even number."<<endl;
            }
            else{
                cout<<"The number is an odd number."<<endl;
            }
        }
    }
    catch(int n){
        cout<<n<<" is a negative number."<<endl;
    }
    return 0;
}