#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    // string str = "I am shivaji chougule the king";
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;

    // *******

//     string str = "abcde";
//     cout<<str<<endl;
//     str.push_back('f');
//     str.push_back('g');
//   //  str.push_back('hij'); this is wrong
//     str.pop_back(); //with this we can pop last ele.
//      cout<<str<<endl;
     // with push_back we can add single char to string

    //********
   // + operator
//     string a = "abc";
//     cout<<a<<endl;
//     string b = "def";
//    string c = a + b ;
//     cout<<c<<endl;

  //********reverse
  string newStr = "shivaji";
  reverse(newStr.begin(),newStr.end());
    cout<<newStr<<endl;
}

