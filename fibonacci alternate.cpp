/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

int main()

{

int n,c,first=0,second=1,next;

int a[30],i,j=0,count=0;

cout<<"Enter the no. of terms of Fibonacci series=";

cin>>n;

cout<<"Terms of Fibonacci series are"<<endl;

//otput: 0,1,1,2,3,5

for(c=0;c<n;c++)

{

if(c<=1)

next=c;  

else

{

next=first+second; //n=2+3=5

first=second; //f=3

second=next; //s=5

}

cout<<next<<endl;

if(next-first>1)

{

for(i=first+1; i<next; i++) //i=4

{

	//a[j] is an array to take missing values 4,6,7,

a[j]=i;

count++;

j++;

}

}

}

cout<<"Missing numbers of the Fibonacci series are:"<<endl;

for(j=0; j<count; j++)

cout<<a[j]<<endl;

return 0;

}