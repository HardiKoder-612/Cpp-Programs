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
    ofstream fout1,fout2;
    fout1.open("country");
    fout2.open("capital");
    fout1<<"India\n";
    fout1<<"Japan\n";
    fout2<<"\nNew Delhi";
    fout2<<"\nTokyo";
    fout1.close();
    fout2.close();
    ifstream fin1,fin2;
    char line[50];
    fin1.open("country");
    fin2.open("capital");
    cout<<"Countries->\n";
    while(fin1)
    {
        fin1.getline(line,50);
        cout<<line<<endl;
    }
    cout<<"\nCapitals->";
    while(fin2)
    {
        fin2.getline(line,50);
        cout<<line<<endl;
    }
    fin1.close();
    fin2.close();
}
