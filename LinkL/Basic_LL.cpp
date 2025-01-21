#include <bits/stdc++.h>
using namespace std;
class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode * head) 
{
  ListNode * curr = head;
  for (; curr != NULL; curr = curr -> next)
    cout << curr -> val << "  ";
    cout << endl;
}

//delet

ListNode * DeletHead(ListNode*head){
  ListNode*temp = head;
  head = head->next;
  delete temp;
  return head;
}

ListNode * DeletTail(ListNode*head){
  if (head == NULL || head->next==NULL) return NULL;
  ListNode*temp=head;
  while (temp->next->next != NULL)
  {
    temp=temp->next;
  }
  delete temp->next;
  temp->next=nullptr;
  return head;
}

ListNode * DeletK(ListNode*head,int k){
  if (k==1) {
    head=DeletHead(head);
    return head;
    }
  int cnt=0;
  ListNode*prev=NULL;
  ListNode*temp=head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt==k)
    {
      prev->next = prev->next->next;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  free(temp);
  return head;
}

ListNode * remove_element(ListNode*head,int ele){
  if (head->date == ele) {
    head=DeletHead(head);
    return head;
    }
  ListNode*prev=NULL;
  ListNode*temp=head;
  while (temp != NULL)
  {
    cnt++;
    if (temp->date == ele)
    {
      prev->next = prev->next->next;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  free(temp);
  return head;
}



//insert
ListNode * InsertatFirst(int value, ListNode * head) {
  ListNode * newnode = new ListNode(value);
  newnode -> next = head;
  head = newnode;
  return head;
}

int main() {
  ListNode * head = NULL; 
  head = InsertatFirst(70, head);
  head = InsertatFirst(60, head);
  head = InsertatFirst(50, head);
  head = InsertatFirst(40, head);
  head = InsertatFirst(30, head);
  head = InsertatFirst(20, head);
  head = InsertatFirst(10, head);

  //cout << "LinkedList before inserting 0 at beginning : " << endl;

  PrintList(head);
  head = InsertatFirst(0, head);

  //cout << "LinkedList after inserting 0 at beginning : " << endl;

  //head = DeletHead(head);

  //head = DeletHead(head);

  //head = DeletTail(head);

  //head = DeletK(head,3);

  PrintList(head);
  return 0;
}