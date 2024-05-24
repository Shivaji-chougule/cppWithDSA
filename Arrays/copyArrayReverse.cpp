// copy one array into another into reverse order.
#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j = n-1-i;
        b[i]=a[j];
    }
    for(int i=0;i<n;i++){
       cout<<b[i]<<" ";
    }
}