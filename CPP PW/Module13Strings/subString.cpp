
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
   string str;
   cout<<"enter string :";
   cin>>str;
   int n = str.length();
   cout<<str.substr(n/2);
}
