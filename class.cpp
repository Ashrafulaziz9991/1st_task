#include<bits/stdc++.h>
using namespace std;

class student{
    public:

        string name;
        int level;
        int roll;
        char section;

        void Display()
        {
           //display as output
           cout<<"Student Information :\n";
           cout<<"Name : "<<name<<"\nClass : "<<level<<"\nRoll Number : "<<roll<<"\nSection : "<<section<<endl;

           cout<<endl;
        }

        /*
        *there is another code for practice the case of constractor
        *that's why constractor is comment in here

        student(string s, int x, int y, char sec){
            name = s;
            level = x;
            roll = y;
            section = sec;
        }*/
};

int main()

{
    student i_human;

    i_human.name = "Shuvo";
    i_human.level = 11;
    i_human.roll = 28;
    i_human.section = 'B';

    //cout<<i_human.name<<" "<<i_human.level<<" "<<i_human.roll<<" "<<i_human.section<<endl;

    i_human.Display();

    student Ashik;
    cout<<"Enter Your Name : ";
    cin.ignore();
    getline(cin, Ashik.name);
    cout<<"Enter Your Class : ";
    cin>>Ashik.level;
    cout<<"Enter Your Roll : ";
    cin>>Ashik.roll;
    cout<<"Enter Your Section : ";
    cin>>Ashik.section;
    Ashik.Display();
    
    return 0;
}
