#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);
    //here 5 is initioal size and 7 is the value of each element.

    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    cout<<endl;
  
}