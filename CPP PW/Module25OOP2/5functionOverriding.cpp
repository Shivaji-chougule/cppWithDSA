#include <iostream>
using namespace std;

class Bikes{
    public:
    string bikeName;

    void bikeColor(){
        cout<<"black"<<endl;
    }
};

class Gasoline:public Bikes{
    public:
    int enginePower;

        void bikeColor(){
        cout<<"red"<<endl;
    }
};
class Electric:public Bikes{
    int motorPower;
};

int main(){
    Gasoline scram;
    scram.bikeName = "speedX400";
    cout<<scram.bikeName<<endl;

    scram.bikeColor(); //calling the function
}