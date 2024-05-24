#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
        string s = "how      to do   coding in   CPP language";
    stringstream ss(s);        
    string temp ;
    while(ss>>temp){
        cout<<temp<<" ";
    }
    cout<<endl;
}   