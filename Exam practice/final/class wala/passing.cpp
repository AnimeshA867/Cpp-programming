#include<iostream>
using namespace std;

class sample{
    int d;

    public:
    sample(){
        d=0;
    }
    sample(int d){
        this->d=d;
    }


    //pass by reference
    sample sum(sample &s1, sample &s2){
        sample s3;
        s3=s1.d+s2.d;
        return s3;
    }
    //pass by pointer
    sample sum(sample *s1, sample *s2){
        sample s3;
        s3=s1->d+s2->d;
        return s3;
    }
    void display(){
        cout<<d<<endl;
    }
};

int main(){
    sample s1(12), s2(23),s3;
    

    s3=s1.sum(s1,s2);
    s3.display();
    s3=s1.sum(&s1,&s2);
     s3.display();
    return 0;
}