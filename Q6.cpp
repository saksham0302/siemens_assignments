#include<bits/stdc++.h>

using namespace std;

class Employee {

    //initializing employee ID and designation in private
    private:
    long id = 0;
    string designation = "Null";

    public: 
    string name = "Null";

    //accept the details of employee
    //i is used to keep the track of employer number we are at
    void acceptDetails(int i) {
        cout<<"\nEnter the details of employee "<<i+1<<": "<<endl;
        cin.ignore(1, '\n');
        cout<<"Name: ";
        getline(cin, name);
        cout<<"Id: ";
        cin>>id;
        cin.ignore(1, '\n');
        cout<<"Designation: ";
        getline(cin, designation);
    }
};

class Salary : public Employee {

    //initializing the salary details of employee in private
    private:
    long basePay = 0;
    long HRA = 0;
    long DF = 0;
    long PF = 0;
    long netPay = 0;

    public:

    //accept the salary details of Employee
    //i is used to keep the track of employer number we are at
    void salaryDetails(int i) {
        cout<<"Enter salary details of "<<name<<": "<<endl;
        cout<<"Basic Pay: ";
        cin>>basePay;
        cout<<"HRA: ";
        cin>>HRA;
        cout<<"DF: ";
        cin>>DF;
        cout<<"PF: ";
        cin>>PF;
        //calculate netPay
        netPay = basePay + HRA + DF - PF;
        cout<<"Net Pay: "<<netPay<<endl;
    }
};

int main() {

    int n = 0;

    //receive the number of group of employees
    cout<<"\nEnter no. of employees you want to calculate net pay for: ";
    cin>>n;

    //initialize an array of object of n size
    Salary E[n];

    //for loop to receive the details of employee in an object one by one
    for (int i = 0; i < n; i++) {
        E[i].acceptDetails(i);
        E[i].salaryDetails(i);
    }

    return 0;
}