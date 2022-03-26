/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
    float price;
    ofstream outfile("ITEM");
    cout<<"Enter item name: ";
    cin>>name;
    outfile<<name<<"\n";    //Writing to file
    cout<<"\nEnter price: Rs. ";
    cin>>price;
    outfile<<price;      //Write to file
    outfile.close();
    //taking something from file
    ifstream infile("ITEM");
    infile>>name;
    infile>>price;
    cout<<"\nItem name: "<<name;
    cout<<"\nPrice: Rs. "<<price;
    infile.close();
    return 0;
}
