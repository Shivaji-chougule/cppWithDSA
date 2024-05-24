// Print 1 to n numbers
// Print n to 1 numbers
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){    //base
        return;
    }else{
    
    print(n-1);  //call
    cout<<n<<endl; //work
    }
}

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);
}