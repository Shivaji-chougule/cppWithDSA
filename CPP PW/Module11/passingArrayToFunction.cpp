#include<iostream>
using namespace std;

void display(int a[] ,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void changeValue(int b[],int s){
    b[3] = 100;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    changeValue(arr,size); // so it updates the value
    display(arr,size); 
}

//so we can say that array are pass by referance.