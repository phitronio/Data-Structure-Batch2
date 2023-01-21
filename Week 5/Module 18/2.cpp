#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkedList
{
public:
    node *head;

    DoublyLinkedList()
    {
        head = NULL;
    }

    node* CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->nxt = head;
        head->prv = newnode;
        head = newnode;
    }

    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    void Insert(int index, int data)
    {
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            if(a==NULL)
            {
                break;
            }
            a = a->nxt;
            cur_index++;
        }
        if(a==NULL)
        {
            cout<<"Can't insert\n";
            return;
        }

        node* newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        node* b = a->nxt;
        if(b!= NULL)
        {
            b->prv = newnode;
        }
        a->nxt = newnode;
        newnode->prv = a;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);

    dl.Traverse();

    dl.Insert(2,40);
    dl.Traverse();

    dl.Insert(4,100);
    dl.Traverse();

    dl.Insert(6,90);

    return 0;
}

