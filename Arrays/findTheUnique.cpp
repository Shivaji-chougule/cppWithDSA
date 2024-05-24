//find the unique from array which is not reapeted.
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int arr[] = {1,1,3,5,5,6,7,6};
    int n = sizeof(arr)/4;
    bool flag = false;
    for(int i=0;i<n;i++){
       
        for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
            arr[i] = -1; arr[j] = -1;
            cout<<arr[j]<<endl;
          }
            
        }
       
    }
    for(int k=0;k<n;k++){
                if(arr[k]>0){
                    cout<<arr[k]<<endl;
                }
            }
   
}