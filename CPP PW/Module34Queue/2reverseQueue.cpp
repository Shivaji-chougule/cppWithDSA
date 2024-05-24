#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    for(int i=1;i<=q.size();i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    stack<int> s;
   while(q.size()>0){
    int x = q.front();
    q.pop();
    s.push(x);
   }
   while(s.size()>0){
    int x = s.top();
    s.pop();
    q.push(x);
   }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    display(q);
    reverse(q);
    display(q);
    //reverse again
    reverse(q);
    display(q);
}