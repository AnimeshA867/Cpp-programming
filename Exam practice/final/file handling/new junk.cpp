#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class object{
    char name[80];
    int roll;
public:
    object(){
        strcpy(name, "");
        roll=0;
    }
    object(char* name, int roll){
        strcpy(this->name, name);
        this->roll = roll;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << roll << endl;
    }
};

int main(){
    object obj("Animesh", 12);
    ofstream fout;
    fout.open("file2.bin", ios::binary);
    fout.write(reinterpret_cast<char*>(&obj), sizeof(obj));
    fout.close();

    object obj1;
    ifstream fin;
    fin.open("file2.bin", ios::binary);
    fin.read(reinterpret_cast<char*>(&obj1), sizeof(object));
    obj1.display();
    fin.close();

 return 0;
}