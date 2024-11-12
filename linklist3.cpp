#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class linked_list
{
public:
    node *head;

    linked_list()
    {
        head = NULL;
    }

    void insert_at_head(int value)
    {
        node *a = new node(value);

        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head is not equal to NULL
        a->next = head;
        head = a;
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
};

int main()
{
    linked_list l;

    // l.traverse();       // Initially, the list is empty
    l.insert_at_head(50);
    l.traverse();
    l.insert_at_head(40);
    l.traverse();
    l.insert_at_head(30);
    l.traverse();
    l.insert_at_head(20);
    l.traverse();
    l.insert_at_head(10);
    l.traverse();

    return 0;
}
