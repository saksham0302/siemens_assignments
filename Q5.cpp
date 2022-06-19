#include<bits/stdc++.h>

using namespace std;

class bank
{
    private:

    //data members to store the details of candidate
    string name;
    long int accountNo;
    string accountType;
    long int balance;

    public: 

    //constructor to initialize the value of data members
    bank() {
        name = "NULL";
        accountNo = 0;
        balance = 0;
        accountType = "NULL";
    }

    //member functions to perform the different operations
    void setData();
    void deposit();
    void withdraw();
    void mainBalance();
};

//receive the details from the candidate
void bank :: setData() {

    cout<<"\nEnter the details below: "<<endl;
    cout<<"\nName: ";
    getline(cin, name);

    do {
        cout<<"Account Number: ";
        cin>>accountNo;
        if (accountNo <= 0) 
            cout<<"\nInvalid Input!! Provide the information again.\n"<<endl;
    }while (accountNo <= 0);

    cin.ignore(1,'\n');
    cout<<"Account type (Savings, Current): ";
    getline(cin, accountType);
    
    do {
        cout<<"Balance: ";
        cin>>balance;
        if (balance < 0) 
            cout<<"\nInvalid Input!! Balance can't be in negative.\n"<<endl;
    }while (balance < 0);
    
}

//receive the amount to be deposited in the account
void bank :: deposit() {

    long int depositAmount;

    do {
        cout<<"\nEnter the amount to be deposited: ";
        cin>>depositAmount;
        if (depositAmount < 0) 
            cout<<"\nInvalid Input!! Deposit Amount can't be in negative."<<endl;
    }while (depositAmount < 0);

    balance = balance + depositAmount;
}

//withdraw the amount from account
void bank :: withdraw() {

    long int withdrawAmount;

    do {
        cout<<"\nEnter the amount to be withdrawn: ";
        cin>>withdrawAmount;
        if (withdrawAmount < 0) 
            cout<<"\nInvalid Input!! Withdrawl Amount can't be in negative."<<endl;
    }while (withdrawAmount < 0);

    //to check whether there is sufficient balance available or not
    if (balance > withdrawAmount) 
        balance = balance - withdrawAmount;
    else
        cout<<"\nInsufficient balnace!!!"<<endl;
}

//display the details of account holder
void bank :: mainBalance() {

    cout<<"\nDetails of account holder: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Account No.: "<<accountNo<<endl;
    cout<<"Account Type: "<<accountType<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main() {

    //initialize an object of class
    bank candidate;

    //calling the member functions of class
    candidate.setData();
    candidate.deposit();
    candidate.withdraw();
    candidate.mainBalance();

    return 0;    
}