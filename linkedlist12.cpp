#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int x;
    node *next;

    node(int value)
    {
        x = value;
        next = NULL;
    }
};

class linkedlist
{
public:
    node *root;
    double counter = 0;
    int sz = 0;

    void insertAtroot(int value)
    {
        sz++;
        node *a = new node(value);
        if (root == NULL)
        {
            root = a;
            return;
        }
        a->next = root;
        root = a;
        // count+=a;
    }

    void traverse()
    {
        node *a = root;
        while (a != NULL)
        {
            cout << a->x << " ";
            a = a->next;
        }
        cout << endl;
    }

    int getsize()
    {
        return sz;
    }

    int getsum()
    {
        node *a = root;
        while (a != NULL)
        {
            counter += a->x;
            a = a->next;
        }
        return counter;
    }

    int getLast()
    {
        if (root == NULL)
        {
            return -1;
        }
        
        node *a = root;
        int current_index = 0;
        while (current_index != getsize() - 1)
        {
            /* code */
            a = a->next;
            current_index++;
        }
        return a->x;
    }

    // int getsum()
    // {
    //     node *a = root;
    //     while (a != NULL)
    //     {
    //         counter += a->x;
    //         a = a->next;
    //     }
    //     return counter;
    // }

    double getAverage()
    {
        if (root == NULL)
        {
            return 0;
        }
        
        node *a = root;
        while (a != NULL)
        {
            counter += a->x;
            a = a->next;
        }
        return counter / sz;
    }
};

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    linkedlist D;
    // int x = 7;
    //  int x;
    //  cout<<"Enter your Number : ";
    //  cin>>x;

    // D.insertAtroot(87);
    // D.insertAtroot(70);
    // D.insertAtroot(77);
    // D.insertAtroot(74);
    D.insertAtroot(7);
    D.insertAtroot(4);
    D.insertAtroot(6);
    D.insertAtroot(2);
    D.insertAtroot(3);

    D.traverse();
    cout << "Size of list " << D.getsize() << endl;
    cout << "Average of list " << D.getAverage() << endl;
    //cout << "Sum of list " << D.getsum() << endl;
    cout << "last of the list " << D.getLast() << endl;

    return 0;
}
