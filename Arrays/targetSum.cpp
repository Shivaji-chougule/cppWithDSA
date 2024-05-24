//find the how many pairs are there which do sum of given target.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,2,6,7};
    int x = 5;

    int n = sizeof(arr)/4;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                count++;
            }

        }
    }
    cout<<count<<endl;
}