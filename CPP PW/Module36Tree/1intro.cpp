#include <iostream>
#include<algorithm>
using namespace std;

class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

void displayNodes(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayNodes(root->left);
    displayNodes(root->right);
}
int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxVal(Node* root){
    if(root == NULL) return INT8_MIN;
    return max(root->val,max(maxVal(root->left),maxVal(root->right)));
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayNodes(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxVal(a)<<endl;
    cout<<levels(a)<<endl;
}