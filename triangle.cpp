// take 3 number input and tell if they can be side of triangle
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter first side :";
    cin>>x;
    cout<<"enter second side :";
    cin>>y;
    cout<<"enter third side :";
    cin>>z;
    if((x+y)>z && (x+z)>y && (z+y)>x){
        cout<<"they can be the sides";
    }else{
        cout<<"they can not"<<endl;
    }
}