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
    ofstream fout;
    fout.open("country");
    fout<<"India\n";
    fout<<"Japan\n";
    fout.close();
    fout.open("capital");
    fout<<"\nNew Delhi\n";
    fout<<"Tokyo\n";
    fout.close();
    ifstream fin;
    fin.open("country");
    char line[40];
    cout<<"\nCountries->\n";
    while(fin)
    {
        fin.getline(line,40);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("capital");
    cout<<"Capitals->";
    while(fin)
    {
        fin.getline(line,40);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}
