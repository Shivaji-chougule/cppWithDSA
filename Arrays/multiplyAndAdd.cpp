// given array of integer, multiply by 2 at even  and add 10 on odd places
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter n :";
    cin>>n;
    int* arr = new int[n];
    
    for(int i=0;i<n;i++){
        arr[i] = i + 1;
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           arr[i]= arr[i]*2;
        }else{
           arr[i]= arr[i]+10;
        }
        cout<<arr[i]<<" ";
    }
}

