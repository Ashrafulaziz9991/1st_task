#include<bits/stdc++.h>
using namespace std;

class drawing
{
    public:
        string Draw;
        int Angle;

        drawing(string Draw, int Angle)
        {
            this->Draw = Draw;
            this->Angle = Angle;
        }

        void display()//to print
        {
            cout<<"Structure is : "<< Draw <<"\nNumber of angle is : "<<Angle<<endl;
            cout<<endl;
        }
};

int main()
{
    drawing rectangle("Rectangle", 4);
    rectangle.display();
    drawing pen("Pentagon", 5);
    pen.display();
    drawing rec("Triangle", 3);
    rec.display();
    drawing Hex("Hexagon", 6);
    Hex.display();
    drawing line("Straight line", 2);
    line.display();
    drawing oct("The Octagon", 8);
    oct.display();
    return 0;
}