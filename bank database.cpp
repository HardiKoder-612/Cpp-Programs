/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class bank
{
    char name[50];
    long acc;
    char type;
    double bal;
    public:
    bank()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"\nAccount number: ";
        cin>>acc;
        cout<<"\nEnter type of account (s/c): ";
        cin>>type;
        cout<<"\nEnter the initial balance: ";
        cin>>bal;
    }
    void deposit()
    {
        int dep=0;
        cout<<"Balnce in the account: "<<bal;
        cout<<"\nEnter amount of money to be deposited: ";
        cin>>dep;
        bal+=dep;
        cout<<"Updated balance is: "<<bal;
    }
    void withdraw()
    {
        int with;
        cout<<"\nBalance in account: "<<bal;
        cout<<"\nEnter how much you want to withdraw: ";
        cin>>with;
        cout<<"\n\nMoney withdrawn...\nUpdated balance is: "<<bal-with;
    }
    void display()
    {
        cout<<"\nName: "<<name<<"\nAccount number: "<<acc;
        if(type=='s')
        {
            cout<<"\nType: Savings";
        }
        else
        cout<<"\nType: Current";
        cout<<"\nBalance: Rs."<<bal;
    }
};
int main()
{
    bank obj;
    int choice;
    char ch;
    do
    {
        cout<<"****************************************\nWelcome to our Bank\n************************************";
        cout<<"\n\nWhat you want to do->\n1. Deposit money.\n2. Withdraw money.\n3. Show details of the account.\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"\n\nYou have selected to deposit money in the account\n";
                    obj.deposit();
                    break;
            case 2: cout<<"\n\nYou want to withdraw money\n";
                    obj.withdraw();
                    break;
            case 3: cout<<"\n\nYou want details of your bank account\n";
                    obj.display();
                    break;
        }
        cout<<"\n\nDo you want to continue(y/n): ";
        cin>>ch;
    }while(ch=='y');
    cout<<"\n\nThank you for using our bank.";
    return 0;
}