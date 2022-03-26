/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Addition
{
    public:
    void sum(int a ,int b)
    {
        cout<<"a+b: "<<a+b;
    }
    void sum(int a,int b, int c)
    {
        cout<<"a+b+c: "<<a+b+c;
    }
};
int main()
{
    Addition obj;
    obj.sum(10,20);
    cout<<endl;
    obj.sum(10,20,30);
    cout<<endl;
    return 0;
}