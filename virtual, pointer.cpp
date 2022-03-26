/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class shape
{
    public:
    double a,b;
    virtual void display_area()
    {}
};
class triangle:public shape
{
    public:
    void get_data()
    {
        cout<<"\nEnter length of base of triangle: ";
        cin>>a;
        cout<<"\nEnter height of the triangle: ";
        cin>>b;
    }
    void display_area()
    {
        double area=0.5* a * b;
        cout<<"\nArea of the tiangle is: "<<area;
    }
};
class rectangle: public shape
{
    public:
    void get_data()
    {
        cout<<"\nEnter length of the rectangle: ";
        cin>>a;
        cout<<"\nEnter breadth of the rectangle: ";
        cin>>b;
    }
    void display_area()
    {
        double area = a*b;
        cout<<"\nArea of the rectangle is: "<<area;
    }
};
int main()
{
    shape *ptr;
    shape s;
    ptr=&s;
    triangle t;
    rectangle r;
    cout<<"************RECTANGLE\n";
    ptr=&r;
    r.get_data();
    ptr->display_area();
    cout<<"\n***********TRIANGLE\n";
    ptr=&t;
    t.get_data();
    ptr->display_area();
    return 0;
}