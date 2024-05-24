#include <iostream>
using namespace std;

class A {
    public:
    int A_public;
};
class B :virtual public A{
    public:
    int B_public;
};
class C :public A{
    public:
    int C_public;
};
class D : virtual public A , virtual public B{
    public:
    int D_public;
};


int main(){
    D first;
    first.B_public = 10;
    cout<<first.B_public<<endl;

    first.A_public = 20;
    cout<<first.A_public<<endl;
}
//In C++, when a class inherits from another class virtually 
//(using virtual keyword), it ensures that only one instance 
//of the base class is inherited by the derived class hierarchy.
// This prevents the "diamond problem" where ambiguity arises due to multiple inheritance paths.