#include <iostream>
using namespace std;

class Node{ // linked list node
    public:
    int val;
    Node* next; // with this extra data member we can link them
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    // assingning values
    // Node a;
    // a.val = 10;
    // Node b;
    // a.val = 20;
    // Node c;
    // a.val = 30;
    // Node d;
    // a.val = 40; // insted of this use constructor
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // (*(a.next)).val = 50;
    a.next->val = 5;
    cout<<b.val<<endl;
    // cout<<(*(a.next)).val<<endl; insted of writing like this use arrow
    cout<<a.next->val<<endl;
    cout<<(a.next->next)->val<<endl;
    cout<<((a.next->next)->next)->val<<endl;

    // printing linked list
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}