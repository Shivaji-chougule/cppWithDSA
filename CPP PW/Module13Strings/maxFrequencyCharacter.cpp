#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  string s = "powermachine";
  vector<int> vec(26,0);
 for(int i=0;i<s.length();i++){
    char ch = s[i];
    int ascii = (int)ch; //typecasting
    // cout<<ascii<<" "<<endl;
    vec[ascii-97]++;
  }
//********************************
 for(int i=0;i<26;i++){
  cout<<vec[i]<<" ";
  }
  cout<<endl;

 for(int i=0;i<26;i++){
    int ascii = i + 97;
    char ch = (char)ascii;
    if(vec[i]>0){
        cout<<vec[i]<<" "<<ch<<endl;
    }
  }
//***********************************
  
//************for max value 

//   int maxim = 0;
//  for(int i=0;i<26;i++){
//     if(vec[i]>maxim){
//         maxim = vec[i];
//     }
//   }

//   for(int i=0;i<26;i++){
//    if(vec[i]==maxim){
//     int ascii = i + 97;
//     char ch = (char)ascii;
//     cout<<ch<<" "<<maxim<<endl;
//    }
//   }
}