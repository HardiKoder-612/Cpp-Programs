/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, first, last, sum, digits, nn, a, b;
    cout <<"\n\nFinding the number after swapping the first and last digits:\n";
    cout <<"-------------------------------------------------------------\n";
    cout <<"Input any number: ";                       
    cin >> n;                                           //1234
    digits =(int)log10(n);                              //3
    cout<<"Number of digits: "<<digits+1<<"\n";
    first = n /pow(10, digits);                         // (1234/1000)=1
    cout<<"First digit of number is: "<<first<<"\n";
    last = n %10;                                       // (1234%10)=4
    cout<<"Last digit of number is: "<<last<<"\n";
    a = first *(pow(10, digits));                       //1*1000=1000
    b = n % a;                                          //1234 % 1000=234
    n = b /10;                                          //234 / 10 = 23
    nn = last *(pow(10, digits))+(n *10+ first);        //(4*1000) + (23 * 10 + 1) = 4231
    cout <<"The number after swaping the first and last digits is: "<< nn << endl;
    return 0;
}
