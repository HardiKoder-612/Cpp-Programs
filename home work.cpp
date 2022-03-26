/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    float height,weight;
    public:
    student()                                   //CONSTRUCTOR
    {
        cout<<"\nEnter the name of the student: ";
        cin>>name;
        cout<<"\nEnter the roll number: ";
        cin>>roll;
        cout<<"\nEnter the height(in cms): ";
        cin>>height;
        cout<<"\nEnter the weight(in kgs): ";
        cin>>weight;
    }
    student(student &obj)                       //COPY CONSTRUCTOR
    {
        name=obj.name;
        roll=obj.roll;
        height=obj.height;
        weight=obj.weight;
    }
    void display()                              //DISPLAY THE DETAILS
    {
        cout<<"Name: "<<name<<"\nRoll Number: "<<roll<<"\nHeight: "<<height<<" cms\n Weight: "<<weight<<" kg";
        
    }
    ~student()                                  //DESTRUCTOR
    {
        cout<<"\nDestructor is called.\n";
    }
};
int main()
{
    student obj1;
    student obj2=obj1;                          //COPY CONSTRUCTOR IS CALLED
    cout<<"\nEntered details are following->\n";
    obj2.display();    
    return 0;
}