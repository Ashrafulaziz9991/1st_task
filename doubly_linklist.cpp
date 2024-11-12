#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class doubly_linklist
{
public:
    node *head;
    int sz;

    doubly_linklist()
    {
        head = NULL;
        sz = 0;
    }

    void insert_head(int value)
    {
        sz++;
        node *newnode = new node(value);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        // head is not NULL
        node *a = head;
        newnode->next = a;
        a->prev = newnode;
        head = newnode;
    }

    void traverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }

    void preverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->prev;
        }
        cout << endl;
    }
    
};

int main()
{

    doubly_linklist dl;

    dl.insert_head(78);
    dl.insert_head(708);
    dl.insert_head(780);
    dl.insert_head(718);
    dl.insert_head(782);
    dl.insert_head(878);

    dl.traverse();

    return 0;
}