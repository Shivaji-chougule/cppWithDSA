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
void display(Node* head){ // display with while loop 
    Node* temp = head;
      while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void displayReccution(Node* head){ // display with reccursive apporoch 
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayReccution(head->next);
  
}

int size(Node* head){
    int n = 0;
    Node* temp = head;
      while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

 //******************* to understand

    cout<<(*a).val<<endl; //10
    cout<<a->val<<endl; //10

    cout<<(*((*a).next)).val<<endl; //20
    cout<<a->next->val<<endl; //20

    cout<<a->next->next->val<<endl; //30
    cout<<a->next->next->next->val<<endl; //40
//******************************

    display(a); //method one  
    displayReccution(a); //method one 
    cout<<endl;
    cout<<size(a)<<endl;
  
}