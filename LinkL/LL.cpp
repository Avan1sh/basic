#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};
void Delkthelement(Node*head,int k){
    if(k==1){
        Node*temp=head;
        head=head->next;
        delete(temp);
    }
    else{
        count =0;
        Node*temp=head;
        Node*prev=nullptr;
        while (temp != NULL)
        {
            count++;
            if(count==k){
                prev->next=prev->next->next;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }
}
void delethead(Node*head){
    Node*temp=head;
    head=head->next;
    delete temp;
}
void delet_tail(Node*head){
    Node*temp=head;
    if(head->next!=NULL){
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->nest;
        temp->next=nullptr;
    }
}

void insert_head(Node*head,int x){
    Node*temp=new Node(x,head);
    return temp;
}
void insert_tail(Node*head,int x){
    Node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newNode= new Node(x);
    temp->next=newnode;
    return head;
}

int main(){ 

}