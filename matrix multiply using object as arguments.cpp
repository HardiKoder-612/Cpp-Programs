/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;
class matrix
{
    int m[3][3];
    public:
        int c[3][3];
    void read()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            cin>>m[i][j];
        }
    }
    matrix multiply( matrix o1, matrix o2)
    {
        matrix o3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                o3.c[i][j]=0;
                for(int k=0;k<3;k++)
                o3.c[i][j]+=o1.m[i][j]*o2.m[i][j];
            }
        }
        return o3;
    }
};
int main()
{
    matrix obj1,obj2,obj3;
    int mul[3][3];
    cout<<"Enter the matrix 1-> \n";
    obj1.read();
    cout<<"\nEnter the matrix 2-> \n";
    obj2.read();
    obj3=obj3.multiply(obj1,obj2);
    cout<<"\nMultiplication of the 2 matrices is->\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<obj3.c[i][j]<<"  ";
        }    
        cout<<"\n";
    }
    return 0;
    
}