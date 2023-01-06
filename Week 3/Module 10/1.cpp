#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node * nxt;
};

class LinkedList{
public:
    node * head;

    LinkedList()
    {
        head = NULL;
    }

    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    //Search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }
};

int main()
{
    LinkedList l;

    l.Traverse();

    l.InsertAtHead(10);
    l.Traverse();

    l.InsertAtHead(30);
    l.Traverse();

    l.InsertAtHead(20);
    l.Traverse();

    l.InsertAtHead(30);
    l.Traverse();

    cout<<"10 is found at "<<l.SearchDistinctValue(10)<<"\n";

    cout<<"5 is found at "<<l.SearchDistinctValue(5)<<"\n";

    cout<<"30 is found at "<<l.SearchDistinctValue(30)<<"\n";

    l.SearchAllValue(30);

    return 0;
}
