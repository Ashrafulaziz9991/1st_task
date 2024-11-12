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

class linklist11
{
public:
    node *head;
    int sz = 0;

    void insert_head(int value)
    {
        sz++;
        node *a = new node(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // head is not NULL
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

    void search_value(int value)
    {
        node *a = head;
        int index = 0;

        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << "\n";
                return;
            }
            a = a->next;
            index++;
        }
        cout << value << " is not found in the list\n";
    }

    int getsize()
    {
        return sz;
    }

    void insert_any_index(int index, int value)
    //if index is 0, then ther's no needed to call it function, then call "insert_head(int value)"
    {
        if (index < 0 || index > sz)
        {
            return;
        }
        if (index == 0)
        {
            insert_head(value);
        }

        node *a = head;
        int current_index = 0;
        sz++;
        while (current_index != index - 1)
        {
            a = a->next;
            current_index++;
        }
        node *newnode = new node(value);
        newnode->next = a->next;
        a->next = newnode;
    }

    void delete_at_head()
    {
        if(head == NULL)
        {
            return;
        }
        //if head is not null
        sz--;
        node *a = head;
        head = a->next;

        delete a;
    }

    void delete_any_index(int index)
    {
        if(index < 0 || index > sz-1)
        {
            cout<<index<<" Index is not exist"<<endl;
            return;
        }

        if(index == 0)
        {
            delete_at_head();
        }

        sz--;

        node *a = head;
        int current_index = 0;

        while (current_index != index-1)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->next;
        a->next = b->next;

        delete b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    linklist11 l;
    l.insert_head(9);
    l.insert_head(69);
    l.insert_head(89);
    l.insert_head(109);
    l.insert_head(79);
    l.insert_head(94);
    l.traverse();
    l.search_value(9);

    cout << "Lenght of list " << l.getsize() << endl;
    l.insert_any_index(3, 50);

    l.traverse();

    l.delete_at_head();
    l.traverse();

    l.delete_any_index(4);
    l.traverse();
    cout << "Lenght of list " << l.getsize() << endl;

    l.delete_at_head();
    l.traverse();
    cout << "Lenght of list " << l.getsize() << endl;


    return 0;
}
