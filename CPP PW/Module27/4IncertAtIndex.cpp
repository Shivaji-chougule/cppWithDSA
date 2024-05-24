#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size = 0;
    LinkedList(){
       head = tail = NULL;
       size = 0;   
    }
    void insertAtTail(int value){
        Node* temp = new Node(value);
        if(size == 0){
            head = tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int value){
        Node* temp = new Node(value);
        if(size == 0){
            head = tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx , int value){
        if(idx<0 || idx>size) cout<<"invalid input"<<endl;
        else if(idx == 0 ) insertAtHead(value);
        else if(idx == size ) insertAtTail(value);
        else{
            Node* t = new Node(value);
            Node* temp = head;
            for(int i=1 ; i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx){
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        else if(idx<0 || idx>size){ 
            cout<<"invalid input"<<endl;
              return;
            }
         else if(idx == 0 ) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
         else{
            Node* temp = head;
            for(int i=1 ; i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
       
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    
    void display(){
        Node* print = head;
        while(print != NULL){
            cout<<print->val<<" ";
            print = print->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    
    ll.insertAtHead(100);
    ll.display();
    
    ///insert at index number
    ll.insertAtIdx(2,500);
    ll.display();

    //***Delete
    // ll.deleteAtHead();
    // ll.display();
    // ll.deleteAtTail();
    // ll.display();
    ll.deleteAtIndex(3);
    ll.display();
}