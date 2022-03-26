/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

//const overloading

class Student

{

  public:

  int rollno;

  string name;

  // first constructor

  Student(int x)

  {

  	rollno=x;

  	cout<<"I am in first const having one param:\n";

  	cout<<" The roll no of student is: "<<rollno<<"\n";

	}

	Student(int a,string b)

	{

		rollno=a;

		name=b;

		cout<<"I am in second const having two param:\n";

  	cout<<" The roll no of student is: "<<rollno<<"\n";

  	cout<<"The name of student is: "<<name<<"\n";	

	}

};
int main()

{

	Student obj1(123);   //obj1 ll call first const

	

	Student obj2(234,"john");

	

  // student A initialized with roll no 10 and name None

  return 0;

}