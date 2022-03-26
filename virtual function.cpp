/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"\nBase class.";
    }
};
class derived:public base
{
    public:
    void show()
    {
        cout<<"\nDerived class.";
    }
};
int main()
{
    base b;
    derived d;
    b.show();           //s.b
    d.show();           //s.b
    base *ptr;
    ptr=&b;
    ptr->show();        //d.b.
    ptr=&d;
    ptr->show();        //d.b.
    return 0;
}
