#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
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

