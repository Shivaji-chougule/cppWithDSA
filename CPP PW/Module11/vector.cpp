#include<iostream>
#include<vector>  //first we need to import this one
using namespace std;
int main(){
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
v.push_back(60);
v.push_back(70);
v.push_back(80);
// v.push_back(90);
// v.push_back(100);

cout<<"the capacity is :"<<v.capacity()<<endl;
cout<<"the size is :"<<v.size()<<endl;

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

v.pop_back(); //so it will pop the ele form end.
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();

cout<<"the capacity is :"<<v.capacity()<<endl;
cout<<"the size is :"<<v.size()<<endl;

//no matter if you pop ele the capacity will ramain same 
// it will no get decrease

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}