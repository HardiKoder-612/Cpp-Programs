/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class base{
    public:
    int i;
};
class derived1 :virtual public base
{
    public:
    int j;
};
class derived2:virtual public base
{
    public:
    int k;
};
class derived3: public derived1, public derived2
{
    public:
    int sum;
};
int main()
{
    derived3 obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    obj.sum=obj.i+obj.k+obj.j;
    cout<<"Sum is: "<<obj.sum;
    return 0;
}