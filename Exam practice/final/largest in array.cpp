#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[]={1,2,64,32,34,65,43,76,42,45,76};
    int largest;
    int length=sizeof(arr)/sizeof(int);
    try{
        if(length<=0){
            throw length;
        }
    for(int i=0;i<(length)-1;i++){
        largest=max(arr[i],arr[i+1]);
    }
    cout<<"The largest element in the array is: "<<largest<<endl;
    }catch(int n){
        cout<<"The size of array can not be "<<n<<endl;
    }
    return 0;
}