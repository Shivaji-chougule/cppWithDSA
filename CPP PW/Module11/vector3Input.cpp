#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
   for(int i=0;i<5;i++){
    int x;
    cout<<"enter values :";
    cin>>x;
    v.push_back(x);
   }

    for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}
    cout<<endl;
  
}