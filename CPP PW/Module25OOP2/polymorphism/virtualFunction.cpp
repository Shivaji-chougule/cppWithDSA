#include <iostream>
using namespace std;

class vehicle{
    public:
    int noOfTyre;
    virtual void show(){
        cout<<"vehicle ka show function"<<endl;
    }
};
class bike:public vehicle{
    public:
    void show(){
        cout<<"bike ka show function"<<endl;
    }
};
int main(){
    bike b;
    b.show();

    vehicle* a;
    a = new bike;
    a->show();
    // when we put virtual keyword it does compile time
    // binding so it will show the abow output
}