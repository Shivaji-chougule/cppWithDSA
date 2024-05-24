#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "qwer, SDFKL;J23434./tyui$. SDKJLopas dfghjk@lzxcv#bnm";
    sort(s.begin(),s.end()); //it will sort string
    //It sorts according to ASCII value
    cout<<s<<endl;
}