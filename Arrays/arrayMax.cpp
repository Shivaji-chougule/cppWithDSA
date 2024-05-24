#include<iostream>
#include<limits>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,25,6,7,8,9,10}; 
    int n = sizeof(arr)/4;
    // int maxi = INT_MIN;
       int maxi = numeric_limits<int>::min();
    for(int i=0;i<=n;i++){
       if(arr[i] > maxi){
        maxi = arr[i];
       }
    }
    cout<<maxi<<endl;
}
