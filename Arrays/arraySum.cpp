#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; 
    int sum = 0;
    for(int i=0;i<=9;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}