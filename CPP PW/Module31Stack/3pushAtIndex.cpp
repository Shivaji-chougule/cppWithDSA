#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>& s){
    stack<int> temp;
    while(s.size()>0){
       temp.push(s.top());
       s.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
       s.push(temp.top());
       temp.pop();
    }

}

void pushAtIndex(stack<int>& s ,int idx,int n){
     stack<int> helper;
    for(int i=s.size()-1;i>=idx;i--){
        helper.push(s.top());
        s.pop();
    }
    s.push(n);
    while(helper.size()>0){
       s.push(helper.top());
       helper.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    cout<<endl;
    //put 70 at 0 th index
    pushAtIndex(st,2,70);

    print(st);
}