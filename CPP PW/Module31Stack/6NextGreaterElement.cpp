#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,9,5,3,6,8,9,5,2,2,4,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // using array **************
    // int nge[n];
    // for(int i=0;i<n;i++){
    //     nge[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }

    //using stack ********************
    stack<int> st;
    int nge[n];
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark ans in the nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i]=st.top();
        // push the arr[i]
        st.push(arr[i]);
    }
        for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}
