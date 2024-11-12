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

class linklist
{
public:
    node *head;
    linklist()
    {
        head = NULL;
    }

    void insertAtHead(int value)
    {
        node *temp = new node(value);
        if (head == NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int searchDistinctValue(int value)
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
                cout << value << " is founded at index " << index << endl;
            }
            temp = temp->next;
            index++;
        }
    }
};

int main()
{
    linklist l;
    l.insertAtHead(70);
    l.print();
    l.insertAtHead(80);
    l.print();
    l.insertAtHead(70);
    l.print();
    l.insertAtHead(60);
    l.print();
    l.insertAtHead(50);
    l.print();
    l.insertAtHead(40);
    l.print();
    l.insertAtHead(30);
    l.print();
    l.insertAtHead(20);
    l.print();
    l.insertAtHead(10);
    l.print();

    cout << "5 is found at " << l.searchDistinctValue(5) << "\n";
    cout << "50 is found at " << l.searchDistinctValue(50) << "\n";
    //cout << "70 is found at " << l.search_all_value (70) << "\n";

    l.search_all_value (70);

    return 0;
}
/*** */