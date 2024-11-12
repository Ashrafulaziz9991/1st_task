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

class linklist
{
public:
    node *head;
    int sz;

    linklist()
    {
        head = NULL;
        sz = 0;
    }

    void insert_At_head(int value)
    {
        sz++;
        node *temp = new node(value);
        if (head == NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    void tarverse()
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int search_value(int value)
    {
        node *temp = head;
        int index = 0;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }

    void search_all_value(int value)
    {
        node *temp = head;
        int index = 0;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout<<value<<" is founded in Index "<<index<<endl;
            }
            temp = temp->next;
            index++;
        } 
        cout<<value<<" is not found in the list"<<endl;
    }

    int get_size()
    {
        return sz;
    }
};

int main()
{
    linklist a;
    // a.tarverse();
    a.insert_At_head(709);
    a.tarverse();
    a.insert_At_head(79);
    a.insert_At_head(91);
    a.insert_At_head(79);
    a.insert_At_head(90);
    a.insert_At_head(95);
    a.tarverse();
    cout << "size of linklist is " << a.get_size() << endl;
    return 0;
}