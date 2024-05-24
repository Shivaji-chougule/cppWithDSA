//find the how many triples are there which do sum of given target.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,2,6,7,0,8};
    int x = 5;

    int n = sizeof(arr)/4;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                 count++;
            }
            }
           

        }
    }
    cout<<count<<endl;
}