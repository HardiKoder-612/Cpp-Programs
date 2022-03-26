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
    int m,n,b,w;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"\nEnter the number of coloumns : ";
    cin>>n;
    int arr[m][n];
    cout<<"\nEnter the base address: ";
    cin>>b;
    cout<<"Enter the size of one element in array: ";
    cin>>w;
    cout<<"\nEnter the array elements->\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cout<<"\n\n2-D Array is ->\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int p=m-1,q=n-1;
    cout<<"\nAddress of "<<arr[p][q]<<" is: "<<(b+w*(p+q));
    return 0;
}