#include<bits/stdc++.h>

using namespace std;

class Bill {
    
    public:

    float Price;
    float Litre;

    Bill () {
        Price = 96.72;
    }
    
    //overloading the constructor by giving parameters to the new constructor
    //p is the updated price of petrol received by the user
    Bill (float p) {
        Price = p;
    }

    //calculate the total price of petrol filled
    void CalcBill() {
        cout<<"\nEnter the litres of petrol filled in the vehicle: ";
        cin>>Litre;
        cout<<"Price of petrol filled in vehicle = Rs. "<<Price*Litre<<endl;
    }
};

int main() {

    //initializing an object to call the non-parameterized constructor
    Bill B1;
    B1.CalcBill();

    //accept the updated price of petrol
    float Updated_Price = 0;
    cout<<"\nEnter the updated price of petrol: Rs. ";
    cin>>Updated_Price;

    //initializing another object to call the parameterized constructor
    Bill B2(Updated_Price);
    B2.CalcBill();

    return 0;
}