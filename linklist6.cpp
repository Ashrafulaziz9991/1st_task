#include<bits/stdc++.h>
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

class linklist
{
public:

    //in this way time complexity of size counting will be O(1) which is better tham O(n)
    node *head;
    //int sz = 0;
    int sz;
    linklist()
    {
        head = NULL;
        sz = 0;
    }

    void insert_head(int value)
    {

        sz++;
        node *temp = new node(value);

        if(head==NULL)
        {
            head = temp;
            return;
        }
        //if head is not null
        temp->next = head;
        head = temp;

        return;
    }

    void print()
    {
        node *temp = head;

        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }

    int search_value(int value)
    {
        node *temp = head;
        int index = 0;

        while (temp!=NULL)
        {
            if (temp->data == value)
            {
                return index;
            }
            //if temp->data != value
            temp = temp->next;
            index++;
        }
        return -1;
    }

    void search_All_value(int value)
    {
        node *temp = head;
        int index = 0;

        while (temp!= NULL)
        {
            if (temp->data == value)
            {
                //return index;
                cout<<value<<" is founded in Index "<<index<<endl;
            }
            //if temp->data != value
            temp = temp->next;
            index++;
        }
        cout<<value<<" is not found in the list"<<endl;
    }

    //Works on order / time complexity is O(n)
    /*int list_size()
    {
        int sz = 0;
        node *temp = head;

        while (temp != NULL)
        {
            sz++;
            temp = temp->next;
        }
        return sz;
    }*/

    int list_size()
    //it's time complexity O(1)
    {
        return sz;
    }


    void insertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }
        if (index == 0)
        {
            insert_head(value);
            return;
        }
        sz++;
        node *temp = head;
        int current_index = 0;

        while (current_index != index-1)
        {
            temp = temp->next;
            current_index++;
        }

        node *new_temp = new node(value);
        new_temp->next = temp->next;
        temp->next = new_temp;
    }
};

int main()
{
    cout<<"Before insert Extra value : ";
    linklist a;
    a.insert_head(5);
    //a.print();
    a.insert_head(45);
    //a.print();
    a.insert_head(55);
    //a.print();
    a.insert_head(56);
    //a.print();
    a.insert_head(65);
    //a.print();
    a.insert_head(57);
    //a.print();
    a.insert_head(547);
    //a.print();
    a.insert_head(7);
    //a.print();
    a.insert_head(57);
    //a.print();
    a.insert_head(577);
    //a.print();
    a.insert_head(537);
    //a.print();
    a.insert_head(507);
    //a.print();
    a.insert_head(157);
    //a.print();
    a.insert_head(557);
    a.print();

    cout<<"list size is Before insert : "<<a.list_size()<<endl;

    cout<<"\nAfter insert Extra value 0 in the position 4 : "<<endl;
    a.insertAtAnyIndex(4,0);

    a.print();
    cout<<"list size After : "<<a.list_size()<<endl;
    //we've to use cout before use "a.search value();"
    //a.search_value(55);
    //a.search_value(555);
    a.search_All_value(578);
    cout<<"75 is founded a index "<<a.search_value(75)<<endl;
    cout<<"555 is founded a index "<<a.search_value(555)<<endl;
    cout<<"55 is founded a index "<<a.search_value(55)<<endl;

    cout<<"list size is "<<a.list_size()<<endl;

    return 0;
}

