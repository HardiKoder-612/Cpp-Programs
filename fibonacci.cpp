/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n, n1=0, n2=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int nt[n];
    cout<<"Fibonacci series: "<<n1<<", "<<n2<<", ";
    for(int i=0;i<n-2;i++)
    {
        nt[i]=n1+n2;
        n1=n2;
        n2=nt[i];
        cout<<nt[i]<<", ";
    }
    cout<<"\nMissing terms from the fibonacci series are following->\n";
    for(int i=2;i<=nt[n-3];i++)
    {
        int flag=0;
        for(int j=0;j<n-2;j++)
        {
            if(i==nt[j])
            {
                flag++;
            }
            
        }
        if(flag==0)
        cout<<i<<", ";
    }
    return 0;
}