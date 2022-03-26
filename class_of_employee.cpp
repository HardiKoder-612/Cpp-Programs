/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class emp

{

public:  //access specifier

int empid; //e.empid=10;

char name[15]; e.name

//int day,month,year;

class data   //doj is object of class data

{

public:

int day,month,year;   // e.doj.day;

}doj;

}e;  // e object for class emp

int main()

{



cout<<"enter employee id"<<endl;

cin>>e.empid;

cout<<"enter name"<<endl;

cin>>e.name;

cout<<"enter date of joining"<<endl;

cin>>e.doj.day;

cout<<"enter month of joining"<<endl;

cin>>e.doj.month;

cout<<"enter year of joining"<<endl;

cin>>e.doj.year;

cout<<"emp.id:"<<e.empid<<endl;

cout<<"emp name:"<<e.name<<endl;

cout<<"date of joing:"<<e.doj.day<<"-"<<e.doj.month<<"-"<<e.doj.year<<endl;

return 0;;

}

2:01 PM
class Student

{

 public:

 int rollno;

 string name;

};

int main()

{

 Student A;

  Student B;

// setting values for A object

  A.rollno=2021;

  A.name="Karan";

// setting values for B object

  B.rollno=20212121;

  B.name="Arjun";

cout <<"Name and Roll no of A is: "<< A.name << "-" << A.rollno;

 cout <<"Name and Roll no of B is: "<< B.name << "-" << B.rollno;

}