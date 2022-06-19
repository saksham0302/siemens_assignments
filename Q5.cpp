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
        accountNo = 0;
        balance = 0;
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
    cout<<"Account Number: ";
    cin>>accountNo;
    cin.ignore(1,'\n');
    cout<<"Account type: ";
    getline(cin, accountType);
    cout<<"Balance: ";
    cin>>balance;
}

//receive the amount to be deposited in the account
void bank :: deposit() {

    long int depositAmount;

    cout<<"\nEnter the amount to be deposited: ";
    cin>>depositAmount;
    balance = balance + depositAmount;
}

//withdraw the amount from account
void bank :: withdraw() {

    long int withdrawAmount;

    cout<<"\nEnter the amount to be withdrawn: ";
    cin>>withdrawAmount;

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