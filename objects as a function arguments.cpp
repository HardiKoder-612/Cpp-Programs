/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class weight {

 int kilogram;

 int gram;

 public:

  void getdata ();

  void putdata ();

  void sum_weight (weight,weight);

} ;

void weight :: getdata() {

  cout<<"/nKilograms:";

  cin>>kilogram;

  cout<<"Grams:";

  cin>>gram;

}

void weight :: putdata () { 

 cout<<kilogram<<" Kgs. and"<<gram<<" gros.\n";

} //fun(int a,int b)

void weight :: sum_weight(weight w1,weight w2) {

 gram = w1.gram + w2.gram;

 kilogram=gram/1000;

 gram=gram%1000;

 kilogram+=w1.kilogram+w2.kilogram;

}

int main () {

 weight w1,w2 ,w3; //w1,w2,w3 are objects of class weight

  cout<<"Enter weight in kilograms and grams\n";

  cout<<"\n Enter weight #1" ;

  w1.getdata();   //values of w1

  cout<<" \n Enter weight #2" ;

  w2.getdata(); // values of w2

  w3.sum_weight(w1,w2); //object w1 w2 as argument

  cout<<"/n Weight #1 = ";

  w1.putdata();

  cout<<"Weight #2 = ";

  w2.putdata();

  cout<<"Total Weight = ";

  w3.putdata();

  return 0;

}

Press Shift + Tab to navigate to chat history.
