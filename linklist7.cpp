#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class linklist7
{
public:
    node *head;

    linklist7()
    {
        head = NULL;
    }

    void insert_head(int val)
    {
        node *temp = new node(val);

        if (head == NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    void print_traverse()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int search_val(int val)
    {
        node *temp = head;
        int index = 0;

        while (temp != NULL)
        {
            if (temp->data == val)
            {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }


    void search_All_val(int val)
    {
        node *temp = head;
        int index = 0;

        while (temp != NULL)
        {
            if (temp->data == val)
            {
                //return index;
                cout<<val<<" is found at index "<<index<<endl;
                return;
            }
            temp = temp->next;
            index++;
        }
        //return -1;
        cout<<val<<" is not found in the Linked list"<<endl;
    }

};

int main()
{
    linklist7 l;

    l.insert_head(78);
    l.insert_head(8);
    l.insert_head(18);
    l.insert_head(708);
    l.insert_head(780);
    l.insert_head(778);

    l.print_traverse();

    cout<<"708 is found at index "<<l.search_val(708)<<endl;

    l.search_All_val(78);

    return 0;
}
