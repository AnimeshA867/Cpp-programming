//here we will be printing the content of a file using insertion and extraction operator.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fin;
    fin.open("file1.txt");
    char ch[80];
    //using insertion operator
    while(!fin.eof()){
        fin.getline(ch,80);
        cout<<ch<<endl;
    }
    cout<<endl;

    //using extraction operator

    while(!fin.eof()){
        // fin.get(ch);
        cout<<ch;
    }
    
    return 0;
}