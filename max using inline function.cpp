/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
#define  MAX(p,q,r) (p>q)?((p>r)?cout<<p<<" is largest.":cout<<r<<" is largest."):((q>r)?cout<<q<<" is largest.":cout<<r<<" is largest.");   
#define  MIN(p,q,r) (p<q)?((p<r)?cout<<p<<" is smallest.":cout<<r<<" is smallest."):((q<r)?cout<<q<<" is smallest.":cout<<r<<" is smallest.");
int main()
{
    int a,b,c;
    cout<<"\nENter the three numbers: ";
    cin>>a>>b>>c;
    MAX(a,b,c);
    cout<<endl;
    MIN(a,b,c);
    return 0;
}