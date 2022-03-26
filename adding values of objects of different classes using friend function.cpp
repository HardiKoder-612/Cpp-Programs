/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;
class DB;
class DM
{
    public:
    float meter,centimeter;
    DM()
    {
        cout<<"Enter distance in meter: ";
        cin>>meter;
        cout<<"\nEnter distaance in centimeter: ";
        cin>>centimeter;
    }
    friend void sum(DM o1,DB o2);
};
class DB{
    public:
    float feet,  inches;
    DB()
    {
        cout<<"\nEnter distance in feets: ";
        cin>>feet;
        cout<<"\nEnter distance in inches: ";
        cin>>inches;
    }
    friend void sum(DM o1,DB o2);
};

void sum (DM o1, DB o2)
{
        int choice;
        cout<<"\nEnter your choice->\n1. For answer in meter and centimeter.\n2. For answer in feets and inches.\nChoice: ";
        cin>>choice;
        if(choice==1)
        {
            o2.feet=0.3048*o2.feet;
            o2.inches=2.5*o2.inches;
            o1.meter+=o2.feet;
            o1.centimeter+=o2.inches;
            cout<<"\nSum of both the distances in meter and centimeter is: "<<o1.meter<<" meter and "<<o1.centimeter<<" centimeter.";
        }
        else
        {
            o1.meter=3.28*o1.meter;
            o1.centimeter=0.393*o1.centimeter;
            o2.feet+=o1.meter;
            o2.inches+=o1.centimeter;
            cout<<"\nSum of both the distances in feets and inches is: "<<o2.feet<<" foot and "<<o2.inches<<" inches.";
        }
}
int main()
{
    DM obj1;
    DB obj2;
    sum(obj1,obj2);
    return 0;
}
