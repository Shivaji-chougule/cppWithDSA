#include <iostream>
using namespace std;
int main(){
    int digit;
    cout<<"enter number :";
    cin>>digit;
    if(digit>99 && digit<1000){
        cout<<"given number is three digit";
    }else{
        cout<<"not a three digit"<<endl;
    }
}
// here && and and condition require both the condition should be true to get exicute.