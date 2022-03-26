/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class student{
    public:
    char name[30];
    int roll ;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"\nEnter the roll number: ";
        cin>>roll;
    }
};
class test: public student
{
    public:
    float m1,m2;
    void getmarks()
    {
        cout<<"\nEnter marks in subject 1 (out of 100): ";
        cin>>m1;
        cout<<"\nEnter marks in subject 2 (out of 100): ";
        cin>>m2;
    }
    
};
class sport{
    public:
    float m3;
    void sport_marks()
    {
    cout<<"\nEnter the marks in sports( out of 100): ";
    cin>>m3;
    }
};
class result: public test, public sport
{
 public:
 float total;
 void display()
 {
 	total=m1+m2+m3;
     cout<<"\nName: "<<name<<"\nRoll number: "<<roll;
     cout<<"\nMarks in subject 1 (out of 100): "<<m1;
     cout<<"\nMarks in subject 2 (out of 100): "<<m2;
     cout<<"\nMarks in sports (out of 100): "<<m3;
     cout<<"\nTotal marks: "<<total<<" out of 300";
     cout<<"\nPercentage: "<<total*100/300<<" % ";
 }
};

int main()
{
  result obj;
  obj.getdata();
  obj.getmarks();
  obj.sport_marks();
  obj.display();
}
