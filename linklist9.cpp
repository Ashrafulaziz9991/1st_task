#include<bits/stdc++.h>
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

    node *root;
    int sz;

    linklist()
    {
        root = NULL;
        sz = 0;
    }

    void insert_root(int value)
    {
        sz++;
        node *a = new node(value);

        if(root == NULL)
        {
            root = a;
            return;
        }
        //if root is not null

        a->next = root;
        root = a;
    }

    void display()
    {
        node *a = root;

        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

    int search_value(int value)
    {
        node *a = root;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }


    void search_all_value(int value)
    {
        node *a = root;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                //return index;
                cout<<value<<" is founded at index "<<index<<endl;
                return;
            }
            a = a->next;
            index++;
        }
        //return -1;
        cout<<value<<" is not found"<<endl;
    }
    ///in this way time complexity will be O(1), O(1)>O(n)
//    int getsize()
//    {
//        //in this way variable "sz" should be decleared in the upper scope of linked list
//        return sz;
//    }

    void getsize()
    {
        //in this way variable "sz" should be decleared in the upper scope of linked list
        //return sz;
        cout<<"Size of linked list is "<<sz<<endl;
    }


    ///in this way time complexity will be O(n)
//    int getsize()
//    {
//        node *a = root;
//        int sz = 0;
//
//        while(a!=NULL)
//        {
//            sz++;
//            a = a->next;
//        }
//        return sz;
//    }

    void insert_any_index(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }

        if(index == 0)
        {
            insert_root(value);
        }

        sz++;
        node *a = root;
        int current_index = 0;

        while(current_index != index-1)
        {
            a = a->next;
            current_index++;
        }

        node *newnode = new node(value);
        newnode->next = a->next;
        a->next = newnode;
    }

    void delete_root()
    {
        if(root==NULL)
        {
            return;
        }
        sz--;

        node *a = root;

        root = a->next;

        delete a;
    }

    void delete_any_index(int index)
    {
        if(index < 0 || index > sz)
        {
            return;
        }

        if(index == 0)
        {
            delete_root();
            return;
        }
        sz--;
        node *a = root;
        int current_index = 0;

        while(current_index != index-1)
        {
            a = a->next;
            current_index++;
        }
        node *b = a->next;
        a->next = b->next;

        delete b;
    }

    void insert_data_after_target(int terget, int data)
    {

        sz++;
        node *a = root;
        while(a!=NULL)
        {
            if(a->data == terget)
            {
                break;
            }
            a = a->next;
        }

        if(a==NULL)
        {
            cout<<terget<<" doesn't exist is the List"<<endl;
            return;
        }

        node *b = new node(data);
        b->next = a->next;
        a->next = b;
    }

    //reverse condition using recursive function
    void Reverse(node *a)
    {
        if(a == NULL)
        {
            return;
        }

        Reverse(a->next);
        cout<<a->data<<" ";
    }

    //recursive function
    void reverse_print()
    {
        Reverse(root);
        cout<<endl;
    }

//    void Reverse()
//    {
//        node *a = root;
//        if(a == NULL)
//        {
//            return;
//        }
//
//        Reverse(&a->next);
//        cout<<a->data<<" ";
//    }

};

int main()
{
    linklist l;

    l.insert_root(9);
    l.insert_root(98);
    l.insert_root(19);
    l.insert_root(90);
    l.insert_root(79);
    l.insert_root(89);
    l.insert_root(49);
    l.insert_root(94);
    l.insert_root(93);
    l.display();

    //cout<<"Size of linklist :"<<l.getsize()<<endl;

    l.getsize();

    cout<<"999 is found at index "<<l.search_value(999)<<endl;
    cout<<"9 is found at index "<<l.search_value(9)<<endl;
    cout<<"91 is found at index "<<l.search_value(91)<<endl;
    cout<<"90 is found at index "<<l.search_value(90)<<endl;
    cout<<"77 is found at index "<<l.search_value(77)<<endl;
    cout<<"79 is found at index "<<l.search_value(79)<<endl;


    l.search_all_value(20);
    l.search_all_value(30);
    l.search_all_value(40);
    l.search_all_value(50);
    l.search_all_value(79);
    l.search_all_value(90);

    //(4, 8) means position no 4 & insearting value is 8
    l.insert_any_index(4, 8);
    cout<<"linklist after insert 8 : ";
    l.display();
    //cout<<"Size of linklist after insert 8 : "<<l.getsize()<<endl;
    l.getsize();
    cout<<endl;

    l.delete_root();
    cout<<"linklist after Delete root : ";
    l.display();
    cout<<endl;

    cout<<"After delete index 4 : ";
    l.delete_any_index(4);
    l.display();
    cout<<endl;

    //(9, 3) means where the value is 9, insert 3 after 9
    l.insert_data_after_target(9, 3);
    cout<<"linklist after_insert_target(9, 3) : ";
    l.getsize();
    l.display();
    cout<<endl;

    cout<<"Linked list Reverse form : ";
    l.reverse_print();
    //l.Reverse();
    return 0;
}
