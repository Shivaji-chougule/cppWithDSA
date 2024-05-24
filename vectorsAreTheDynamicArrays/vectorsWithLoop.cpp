#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums;

    int n;
    cout<<"enter n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        nums.push_back(i);
    }
    // for output
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "<<endl;
      
    }
    cout<<"size is :"<<nums.size()<<endl;

    cout<<"capacity is :"<<nums.capacity()<<endl;
}