#include<iostream>
#include<cstring>
using namespace std;

void reverseit(char s[100]){
    int l=strlen(s);
    char temp;
    int j=l-1;
    for(int i=0;i<l/2;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        
    }
    cout<<s<<endl;
}

int main(){
    char s[100]={"Hyena"};
    reverseit(s);
    return 0;
}