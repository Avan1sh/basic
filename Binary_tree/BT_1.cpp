#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void Preorder(Node*root){
    if (root==nullptr) return;
    cout<< root->data<<"  ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node*root){
    if (root==nullptr) return;  
    Postorder(root->left);
    Postorder(root->right);
    cout<< root->data<<"  ";
}

void INorder(Node*root){
    if (root==nullptr) return;  
    INorder(root->left);
    cout<< root->data<<"  ";
    INorder(root->right);
    
}

int main(){
    struct Node*root=new Node(1);
    root->right= new Node(10);
    root->left=new Node(20);
    root->left->right=new Node(7);
    root->left->left=new Node(77);
    root->right->left=new Node(17);
    root->right->right=new Node(18);
    Preorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    INorder(root);
    //int c= root->left->right->data;
    //cout<< c;
}