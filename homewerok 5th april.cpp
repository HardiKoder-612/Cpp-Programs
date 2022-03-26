/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class date
{
    public:
    int day, month, year;
    void getdata()
    {
        cout<<"Enter day(1-31): ";
        cin>>day;
        cout<<"\nEnter month (1-12): ";
        cin>>month;
        cout<<"\nEnter year: ";
        cin>>year;
    }
    void putdata()
    {
        cout<<"\nPresent date: "<<day<<"/"<<month<<"/"<<year;
    }
    void operator ++()
    {
        day=++day;
        month=++month;
    if(day>31&&month>12)
    {
        day-=31;
        month-=12;
        year++;
    }
       cout<<"\nDate Next day: "<<day<<"/"<<month<<"/"<<year;
    }
    void operator --()
    {
        day=--day;
        month=--month;
        if(day==0&&month==0)
        {
            day=31;
            month=12;
            year--;
        }
        else if(day<1)
        day=31;
       cout<<"\nDate on previous day: "<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
    int choice;
    date obj;
    obj.getdata();
    obj.putdata();
    cout<<"\nEnter your choice->\n1. To print next day's date\n2. To print previous day's date\nYour choice-> ";
    cin>>choice;
    if(choice==1)
    ++obj;
    else
    --obj;
    return 0;
}