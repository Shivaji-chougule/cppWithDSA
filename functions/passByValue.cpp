#include<iostream>
using namespace std;

 int addition(int a, int b,int c){
     c = a + b ;
        return c;
 }

//  void addition(int a, int b,int c){
//    int temp = a;
//     a = b;
//     b = temp;
//     //   cout<<a<<" "<<b<<endl;  
//  }
 

int main(){
   int a = 10;
   int b = 30;
   int c = 0 ;
   int res = addition(a,b,c);
   cout<<res<<endl;

   cout<<a<<" "<<b<<" "<<c<<endl;  //not printing updated c
    // cout<<a<<" "<<b<<endl;  
}