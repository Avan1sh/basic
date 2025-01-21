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