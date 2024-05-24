#include <iostream>
#include <stack>
using namespace std;
//printing stack reverse
void printReverseRecc(stack<int>& s){
    if(s.size()==0) return;
    int x = s.top();
    cout<<x<<" ";
    s.pop();
    printReverseRecc(s);
    s.push(x);
}
void pushAtBottom(stack<int>& s,int n){
    if(s.size()==0){
         s.push(n);
         return;
         }
    int x = s.top();
    s.pop();
    pushAtBottom(s,n);
    s.push(x);
}
// making stack reverse
void makeReverseRecc(stack<int>& s){
    if(s.size()==1) return;
    int x = s.top();
    s.pop();
    makeReverseRecc(s);
    pushAtBottom(s,x);
}
void display(stack<int>& s){
    if(s.size()==0) return;
    int x = s.top();
  
    s.pop();
    display(s);
      cout<<x<<" ";
    s.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // printReverseRecc(st);
    // cout<<endl;
    display(st);
    cout<<endl;
    // pushAtBottom(st,90);
    // display(st);
    makeReverseRecc(st);
    cout<<endl;
    display(st);

}
