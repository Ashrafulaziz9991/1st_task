/*Doubly linkedlist*/
#include<bits/stdc++.h>
#define null  NULL
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
        next = null;
        prev = null;

    }
};

class listt{
public:

    node *root;
    int sz;

    listt()
    {
        root = null;
        sz = 0;
    }

    bool exist_value(int exist_val)
    {
        node *a = root;
        int curr_index = 0;
        while (curr_index != sz-1)
        {
            if (a->data == exist_val)
            {
                return true;
            }
            a = a->next;
            curr_index++;    
        }
        return false;
    }

    void insert_root(int value)
    {
        sz++;
        node *Newnode = new node(value);
        if(root == null)
        {
            root = Newnode;
            return;
        }
        node *b = root;
        b->prev = Newnode;
        Newnode->next = b;
        root = Newnode;
    }

    void pushh_back(int value)
    {
        sz++;
        node *Newnode = new node(value);
        if(root == null)
        {
            Newnode = root;
            return;
        }
        node *b = root;
        while (b->next != null)
        {
            b = b->next;
        }
        
        b->next = Newnode;
        Newnode->prev = b;
        //root = Newnode;
    }

    void insert_any_index(int value, int index)
    {
        if (index < 0 || index > sz)
        {
            cout<<"Invalid index"<<endl;
            return;
        }
        
        if (index == 0)
        {
            insert_root(value);
            return;
        }
        sz++;
        node *a = root;
        int current_index = 0;
        while (current_index != index-1)
        {
            a = a->next;
            current_index++;
        }
        node *Newnode = new node(value);
        Newnode->next = a->next;
        Newnode->prev = a;

        node *b = a->next;
        b->prev = Newnode;
        a->next = Newnode;
    }

    void insert_after_value(int value, int curr_data)
    {
        node *a = root;
        int current_index = 0;
        while (current_index != sz-1)
        {
            if (a->data == value)
            {
                break;
            }
            a = a->next;
            current_index++;
        }

        if (a == null)
        {
            cout<<"The value doesn't exist"<<endl;
            return;
        }

        if(!exist_value(value))
        {
            cout<<value<<" is not exist in the list"<<endl;
            return;
        }
        sz++;
        node *Newnode = new node(curr_data);
        Newnode->next = a->next;
        Newnode->prev = a;

        node *b = a->next;
        b->prev = Newnode;
        a->next = Newnode;
    }

    double getsum()
    {
        node *a = root;
        int counter = 0;

        while (a != null)
        {
            counter += a->data;
            a = a->next;
        }
        return counter;
    }

    int getlast()
    {
        if (root == null)
        {
            return -1;
        }

        node *a = root;
        int curr_index = 0;

        while (curr_index != getsize()-1)
        {
            //counter += a->data;
            a = a->next;
            curr_index++;
        }
        return a->data;
    }

    void Delete_root()
    {
        node *a = root;
        node *b = root->next;

        delete a;

        if (b != null)
        {
            b->prev = null;
        }

        root = b;
        sz--;
    }

    void Delete_any_index(int index)
    {
        if (index < 0 || index > sz)
        {
            cout << index << " doesn't exist.\n";
            return;
        }
        node *a = root;
        int current_index = 0;
        while (current_index != index)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->prev;
        node *c = a->next;

        if (b != null)
        {
            b->next = c;
        }

        if (c != null)
        {
            c->prev = b;
        }
        delete a;
        sz--;
        //root = b;
        if (index == 0)
        {
            root = c;
            //in this way root will be also deleted, so there's no needed to call
            //"Delete_root()" function;
        }
    }

    void display()
    {
        node *a = root;
        while (a != null)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

    int getsize()
    {
        return sz;
    }
};
//All functions are successfull
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string st = "Size of linkedlist is ";
    
    listt dl;

    dl.insert_root(78);
    dl.insert_root(28);
    dl.insert_root(88);
    dl.insert_root(8);
    dl.insert_root(708);

    dl.display();

    dl.pushh_back(7);
    dl.pushh_back(17);
    dl.pushh_back(70);

    dl.display();

    dl.insert_root(9);
    dl.pushh_back(32);
    dl.display();
    cout<<st<<dl.getsize()<<endl;

    dl.insert_any_index(7, 2);
    dl.display();

    dl.Delete_any_index(0);
    dl.display();

    cout<<st<<dl.getsize()<<endl;

    dl.insert_after_value(2, 29);
    // dl.display();

    dl.display();

    cout<<"size of list : "<<dl.getsize()<<"\n";

    cout<<st<<dl.exist_value(1)<<endl;

    cout<<dl.getlast()<<"\n";
    cout<<dl.getsum()<<"\n";
    return 0;
}