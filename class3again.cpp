// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class ex
{
public:
    string name;
    int Class;
    int Roll;
    int ID;
    char section;

    void Display()
    {
        cout << "Here is the Information :\n";
        cout << "Name : " << name << "\nClass : " << Class << "\nRoll : " << Roll << "\nID Number : " << ID << "\nSection : " << section << endl;
        cout<<endl;
    }
    ex(string name, int Class, int Roll, int ID, char section)
    {
        this->name = name;
        this->Class = Class;
        this->Roll = Roll;
        this->ID = ID;
        this->section = section;
    }
};

int main()
{
    // Write C++ code here
    ex a("asxe", 8, 77, 9854, 'A');
    a.Display();
    ex b("axe", 8, 7, 854, 'A');
    b.Display();
    ex c("asx", 8, 80, 9854, 'B');
    c.Display();
    ex d("asxe", 8, 17, 954, 'A');
    d.Display();
    ex e("ase", 8, 57, 984, 'A');
    e.Display();
    ex f("sxe", 8, 71, 8054, 'A');
    f.Display();
    ex g("asyxe", 8, 70, 9804, 'A');
    g.Display();
    ex h("asoe", 8, 87, 9854, 'B');
    h.Display();
    ex i("atsxe", 8, 77, 9854, 'B');
    i.Display();
    ex j("atse", 8, 44, 9854, 'A');
    j.Display();
    cout << "Try programiz.pro";
    return 0;
}

