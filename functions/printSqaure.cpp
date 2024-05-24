#include<iostream>
#include<cmath>
using namespace std;

int power(int n ,int p){
 for(int i=1;i<=n;i++){
        cout<<pow(i,p)<<endl;
    }
}
int main(){
    int n ;
    cout<<"enter no :";
    cin>>n;
    int p = 2;
    int result = power(n,p);
}