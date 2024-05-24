#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string firstStr = "powermachine";
    string secStr = "machinepower";
    sort(firstStr.begin(),firstStr.end()); 
    sort(secStr.begin(),secStr.end()); 
    
    bool value = false;
    if(firstStr == secStr){
       value = true;
       cout<<"given string is anagram"<<endl;
    }else{
        cout<<"its not a anagram"<<endl;
    };
}