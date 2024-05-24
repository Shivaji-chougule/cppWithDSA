#include<iostream>
using namespace std;

class calculate{
    public:
    int l = 1;
    int b = 1;
    calculate(){  // default constructor
        l = 2;
        b = 2;
    }
    calculate(int x , int y){ // parameterized constructor
        l = x;
        b = y;
    }
    calculate(calculate& z){ // parameterized constructor
        l = z.l;
        b = z.b;
    }
    ~calculate(){
        cout<<"destructure function is called"<<endl;
    }
};

int main(){
    calculate firstObj;
    cout<<firstObj.l<<" "<<firstObj.b<<endl;

    calculate secObj(5,5);
    cout<<secObj.l<<" "<<secObj.b<<endl;

    calculate thirdObj = secObj;
    cout<<thirdObj.l<<" "<<thirdObj.b<<endl;
}