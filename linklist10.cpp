#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class lists{
public:

    node *head;
    int sz = 0;

    void insert_head(int value)
    {
        sz++;
        node *x = new node(value);
        if(head == NULL)
        {
            head = x;
            return;
        }
        //head = x->next;

        x->next = head;
        head = x;
    }

    void print()
    {
        node *x = head;

        while(x!=NULL)
        {
            cout<<x->data<<" ";
            x = x->next;
        }
        cout<<endl;
    }

    void search_value(int value)
    {
        node *x = head;
        int index = 0;

        while(x != NULL)
        {
            if(x->data == value)
            {
                cout<<value<<" is founded at index "<<index<<endl;
                return;
            }
            x = x->next;
            index++;
        }
        cout<<value<<" is not founded in the list"<<endl;
    }

    void insert_any_index(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            cout<<index<<" Index is not exist"<<endl;
            return;
        }

        if(index == 0)
        {
            insert_head(value);
        }

        sz++;

        node *x = head;
        int current_index = 0;

        while(current_index != index-1)
        {
            x = x->next;
            current_index++;
        }

        node *y = new node(value);
        y->next= x->next;
        x->next = y;
        //to free memory we'll use "delete" key

        //delete y;
    }

    void delete_head()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *x = head;

        head = x->next;
        //to free memory we'll use "delete" key

        delete x;
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
            delete_head();
        }
        sz--;
        node *x = head;
        int current_index = 0;

        while(current_index != index-1)
        {
            x = x->next;
            current_index++;
        }

        node *y = x->next;
        x->next = y->next;
        //to free memory we'll use "delete" key

        delete y;
    }

    void get_size()
    {
        cout <<"Lenght of the list is : "<< sz <<endl;
    }
    
};

int main()
{
    lists m;

    m.insert_head(42);
    m.insert_head(84);
    m.insert_head(284);
    m.insert_head(8);
    m.insert_head(84);
    m.insert_head(24);
    m.insert_head(2);
    m.insert_head(4);

    m.print();

    m.get_size();

    m.search_value(7);
    m.search_value(4);
    m.search_value(3);
    m.search_value(8);

    m.delete_any_index(1);
    m.print();
    m.get_size();

    m.insert_any_index(5, 999);
    //m.delete_any_index(8);
    m.print();
    m.get_size();

    m.delete_any_index(8);
    m.print();
    m.get_size();

    m.search_value(999);
    return 0;
}
