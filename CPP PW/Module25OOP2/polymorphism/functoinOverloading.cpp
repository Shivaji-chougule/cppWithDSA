// function overloading means creating functions with same name
// with different parameters.

#include <iostream>
using namespace std;
    //area of circle
    void calculateArea(double r){
        double pi = 3.14159265359;
       cout<<  pi * r * r <<endl;
    }
    //area of rect
    void calculateArea(double a,double b){
       cout<< a * b <<endl;
    }
   
int main(){
     calculateArea(5);
     calculateArea(5,8);
}