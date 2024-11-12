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

void print(node *temp)
{
    // node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // cout<<"hi";

    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    print(a);
    //    cout << a->data << " " << a->next->data << " " << a->next->next->data << " " << a->next->next->next->data;
    //    cout<<" hi";

    return 0;
}
