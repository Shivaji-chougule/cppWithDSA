#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6}; //declaration and initioaliazation

    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[1] = 9;  //update
      for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}