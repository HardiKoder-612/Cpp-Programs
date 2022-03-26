/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class area{
    int length,breadth,a;
    public: 
    area()
    {
        length=10,breadth=15;
        cout<<"\nLength= "<<length<<"\nBreadth= "<<breadth;
    }
    area(int l, int b)
    {
        length=l;
        breadth=b;
    }
    void cal_area();
    ~area();
};

void area::cal_area()
{
    a=length*breadth;
    cout<<"\nArea of the rectangle is: "<<a;
}
area::~area()
{
    cout<<"\n\nObject is deleted.";
}
int main()
{
    area obj(20,20);
    obj.cal_area();
    area obj1;
    obj1.cal_area();
    
}