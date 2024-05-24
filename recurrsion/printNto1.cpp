// Print n to 1 numbers
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){       //base
        return;
    }else{
    cout<<n<<endl; //work
    print(n-1);    //call
    }
}

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);
}