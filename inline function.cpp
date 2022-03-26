/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

// macro/inline function to get max of 3 numbers

#define MAX(a,b,c) (a > b && a > c ? a : (b > c ? b : c))

// macro/inline function to get min of 3 numbers

#define MIN(a,b,c) (a < b && a < c ? a : (b < c ? b : c))

int main()

{

int x, y, z, large, small;

  // accept 3 numbers from console

cout<<"Enter 3 numbers: ";

cin>>x>>y>>z;



 // call inline function to get the max and min of inputed numbers

large = MAX(x, y, z);

small = MIN(x, y, z);

  // print the largest and smallest numbers

  cout<<"\nMax is : "<<large;

  cout<<"\n Min is: "<<small;

return 0;

}