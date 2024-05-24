// to store the address of any data type we use pointers.
// we can use it for to access the value of variable whose address is in the pointer.
#include<iostream>
using namespace std;
int main(){
    int x = 100;
    int* ptr = &x;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    // cout<<&ptr<<endl; // thats ptrs address

    //also we can change the value of variavble by using pointer.
    *ptr = 200;
     cout<<x<<endl;
     cout<<*ptr<<endl;

}