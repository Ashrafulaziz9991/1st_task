#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

//template <typename T>
class linkedlist
{
public:

    node *head;
    linkedlist()
    {
        head = NULL;
    }
    //to insert the elements of link list
    void insertAtHead(int value)
    {
        node *temp = new node(value);
        if (head==NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    //to print the elements of link list
    void travarse()
    {
        node *temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    linkedlist l;
    l.insertAtHead(75);
    l.insertAtHead(65);
    l.insertAtHead(55);
    l.insertAtHead(45);
    l.insertAtHead(35);
    l.insertAtHead(25);
    l.insertAtHead(15);
    l.insertAtHead(05);
    l.travarse();
    return 0;
}
