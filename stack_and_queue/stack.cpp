#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node * next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* sPush(int x, Node* head){
    Node * newnode = new Node(x);
    newnode -> next = head;
    return newnode; 
}
void sPop(Node*& head){ 
    Node * temp=head;
    head=head->next;
    cout<<"Pop element- "<<temp->data<<endl;
    delete temp; 
}

void printList(Node* head) { 
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node * head = NULL; 
    head = sPush(70,head);
    head = sPush(80,head);
    head = sPush(90,head);
    head = sPush(30,head);
    head = sPush(10,head);
    head = sPush(60,head);
    head = sPush(40,head);

    cout << "Stack elements: "<<endl;
    printList(head); 

    sPop(head);
    cout << "Stack elements after pop: "<<endl;
    printList(head); 

    return 0;
}