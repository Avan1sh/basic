#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node *insert_head(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int findele(Node *head, int n)
{
    Node *first = head;
    Node *second = head;

    for (int i = 0; i < n; i++)
    {
        if (!first)
            return -1;
        first = first->next;
    }

    while (first)
    {
        first = first->next;
        second = second->next;
    }

    if (!second)
        return -1;
    return second->data;
}

int main()
{
    Node *head = nullptr;
    int n;
    cout << "size dal do";
    cin >> n;
    cout << "element bato";
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        head = insert_head(head, data);
    }
    int k;
    cin >> k;
    int result = findele(head, k);
    if (result == -1)
        cout << "invalid";
    else
    {
        cout << "answer";
        cout << result << endl;
    }
}
