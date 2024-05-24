#include<iostream>
using namespace std;

int powerCal(int base, int power){
    if(power==0) return 1;
    return base * powerCal(base,power-1);
}

int main(){
    int base;
    cout<<"enter base :";
    cin>>base;
    int power;
    cout<<"enter power :";
    cin>>power;
    cout<<powerCal(base,power)<<endl;
}
