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

Node *search(Node *root, int target)
{
    while (root != NULL && root->data != target)
    {
        root = target < root->data ? root->left : root->right;
    }
    return root;
}

int main()
{
    Node *root = NULL;
    cout << "Enter values to insert into the BST (-1 to stop):" << endl;
    root = input(root);

    int x;
    cout << "Enter value to search: ";
    cin >> x;
    Node *result = search(root, x);

    if (result != NULL)
    {
        cout << "Found node with value: " << result->data << endl;
    }
    else
    {
        cout << "Value not found in the tree." << endl;
    }

    return 0;
}
