#include<iostream>
using namespace std;

template<class T>

class painInAss{
    T a,b;

    public:
    painInAss(){
        a=b=0;
    }
    painInAss(T a, T b){
        this->a=a;
        this->b=b;
    }

    T largest(){
        return (a>b)?a:b;
    }
    T smallest(){
        return (a<b)?a:b;
    }
};

int main(){
    painInAss <int> obj(12,32);
    cout<<obj.largest()<<endl;
    cout<<obj.smallest()<<endl;;;
    return 0;

}