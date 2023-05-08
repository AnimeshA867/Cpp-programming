#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class object{
    char name[80];
    int roll;

    public:
    object(){
        strcpy(name,"");
        roll=0;
    }
    object(char* name, int roll){
       strcpy(this->name,name);
        this->roll=roll;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.:"<<roll<<endl;
    }
};

int main(){
    object obj;
    ifstream fout;
    fout.open("file2.bin",ios::binary);
    fout.read(reinterpret_cast<char*>(&obj),sizeof(object));
    obj.display();
    return 0;
}