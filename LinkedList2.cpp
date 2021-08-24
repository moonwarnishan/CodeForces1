#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

//Insert At Head
void InsertAtHead(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;
    head=n;


}
//Insert At Tail
void InsertAtTaail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

//Display
void Display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Search
bool Search(node* &head,int key)
{
    node* temp =head;
    while(temp->next!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
//delete at head
void DeleteAtHead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;

}
//delete any value
void Delete(node* head, int val)
{

    node* temp=head;
    if(temp==NULL)
    {
        return;
    }
    if(temp->next==NULL)
    {
        DeleteAtHead(temp);
    }

    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}




int main()
{
    node* head=NULL;
    InsertAtTaail(head,1);
    InsertAtTaail(head,2);
    InsertAtTaail(head,3);
    Display(head);
    Delete(head,2);
    InsertAtHead(head,5);
    InsertAtHead(head,6);
    InsertAtHead(head,7);
    Display(head);
    DeleteAtHead(head);
    Display(head);
    cout<<Search(head,12)<<endl;

}
