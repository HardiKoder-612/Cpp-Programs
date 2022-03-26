#include<iostream>
using namespace std;
void vote (int x)      //throwing restriction
{
    if(x<18)
    throw x;
    else 
    cout<<"Cast vote.";
}
int main()
{
    try
    {
        int age;
        cout<<"\nEnter age: ";
        cin>>age;
        vote(age);
    }
    catch(int m)
    {
        cout<<"\nCannot cast vote because age of the voter is "<<m<<" which is less than 18.";
    }
    return 0;
}