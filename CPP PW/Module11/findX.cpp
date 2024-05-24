#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(12);
    v.push_back(17);
    v.push_back(9);
    v.push_back(21);
    v.push_back(25);

    int x = 21;  // find index of it

    int idx = -1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx = i;
        }
    }
    cout<<idx<<endl;
}