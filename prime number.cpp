/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num,flag=0;
    cout<<"\nEnter the number: ";
    cin>>num;
    if(num==1)
    {
        cout<<"\nNumber is neither prime and nor composite.";
        exit(1);
    }    
    else if(num==2||num==3)
    {
        cout<<"\nNumber is prime.\n";
        exit(1);
    }    
    else
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        flag=1;
    }
    if(flag==1)
    cout<<"\nNumber is not prime.";
    else
    cout<<"\nNumber is prime.";
    return 0;
}
