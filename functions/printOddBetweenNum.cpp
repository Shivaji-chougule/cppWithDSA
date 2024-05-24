#include<iostream>
using namespace std;

int oddNums(int n , int m){
    for(int i=n;i<=m;i++){
        if(i%2==!0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"enter start no :";
    cin>>n;
    int m;
    cout<<"enter end no :";
    cin>>m;
    int result = oddNums(n,m);
}