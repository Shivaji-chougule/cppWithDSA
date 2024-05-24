//take 3 numbers tell which is the greatest
#include <iostream>
using namespace std;
int main(){
     int x,y,z;
    cout<<"enter first no :";
    cin>>x;
    cout<<"enter second no :";
    cin>>y;
    cout<<"enter third no :";
    cin>>z;
    if(x>y && x>z){
        cout<<"first one is greater";
    }else if(y>x && y>z){
        cout<<"sedond one is greater";
    }else{
        cout<<"third one is greater"<<endl;
    }
}