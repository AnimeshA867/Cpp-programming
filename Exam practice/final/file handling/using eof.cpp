#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fstr;

    char ch;

    fstr.open("file1.txt");
    while(!fstr.eof()){
        fstr.get(ch);
        cout<<ch;
    }
    
    
    return 0;
}