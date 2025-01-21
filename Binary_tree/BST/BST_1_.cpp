#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node *insertdata(Node *root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return root;
    }
    if (x < root->data)
    {
        root->left = insertdata(root->left, x);
    }
    else
    {
        root->right = insertdata(root->right, x);
    }
    return root;
}
Node *input(Node *root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertdata(root, data);
        cin >> data;
    }
    return root;
}

void INorder(Node *root)
{
    if (root == nullptr)
        return;
    INorder(root->left);
    cout << root->data << "  ";
    INorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = input(root);
    INorder(root);
}
