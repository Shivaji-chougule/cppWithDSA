#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>& q){
    for(int i=0;i<=q.size();i++){
        cout<<q.front()<<" ";
        q.pop();
        q.push(q.front());
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
}