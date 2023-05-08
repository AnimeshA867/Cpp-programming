#include<iostream>
using namespace std;

class student{
    static int count;
    int marks;

    public:
    student(){
        marks=0;
        count++;
    }
    student(int marks){
        this->marks=marks;
    }
    
   static void display(){
    cout<<count<<endl;
   }

};

int student::count=0;

int main(){
    student s[10];
    student::display();
    
    return 0;
}