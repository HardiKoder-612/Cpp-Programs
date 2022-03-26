/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

class vector{
    float i,j;
    public:
    void create()
    {
     cout<<"\nEnter the vector: ";
     cin>>i>>j;
     cout<<"\nThe vector is: "<<i<<"i^ + ("<<j<<")j^";
    }
    void modify()
    {
        float k,l;
        cout<<"\nThe vector is: "<<i<<"i^ + ("<<j<<")j^";
        cout<<"\nEnter the new position of the vector: ";
        cin>>k>>l;
        i=k;
        j=l;
    }
    void multiply()
    {
        float m,n;
        cout<<"\nEnter the vector to multiply: ";
        cin>>m>>n;
        cout<<"\nThe new vector is: "<<i*m+j*n;
    }
    void magnitude()
    {
        cout<<"\nThe magnitude of the vector is: "<<sqrt((i*i)+(j*j));
    }
};
int main()
{
    vector obj;
    int ch;
    cout<<"\nEnter your choice->\n1. Create a vector\n2. Modify a vector\n3. Scaler product of the vector with another vector\n4. Magnitude of the vector\n";
    cout<<"Enter: ";
    cin>>ch;
    if(ch==1)
    obj.create();
    else if(ch==2)
    {
        obj.create();
        obj.modify();
    }
    else if(ch==3)
    {
        obj.create();
        obj.multiply();
    }
    else
    {
        obj.create();
        obj.magnitude();
    }
    return 0;
}