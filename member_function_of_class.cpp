/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class cube
{
    public:
    int side;
    int vol()
    {
        return side*side*side;
    }    
}obj;
int main()
{
    obj.side=10;
    int volume=obj.vol();
    cout<<"The volume is: "<<volume;
    return 0;
}