/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    string name;
    int age;
    string designation;
    double salary;
    public:
    void getdata();
    void putdata();
};
void Employee :: getdata( )
{
    static int count=1;
    cout<<"\nEmployee "<<count++<<" ->\nName: ";
    cin>>name;
    cout<<"\nAge: ";
    cin>>age;
    cout<<"\nDesignation: ";
    cin>>designation;
    cout<<"\nSalary: ";
    cin>>salary;
}
void Employee :: putdata( )
{
    static int count=1;
    cout<<"\nEmployee "<<count++<<" ->\nName: "<<name<<"\nAge: "<<age<<"\nDesignation: "<<designation<<"\nSalary: "<<salary<<"\n\n";
}
int main()
{
    int n;
    cout<<"Enter the number of Employees: ";
    cin>>n;
    Employee emp[n];
    cout<<"\nEnter the details of Employees->\n\n ";
    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    cout<<"\nEntered details are following->\n\n\n";
    for(int i=0;i<n;i++)
    {
        emp[i].putdata();
    }
    return 0;
}
