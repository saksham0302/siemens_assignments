#include<bits/stdc++.h>

using namespace std;

class Cmplx {

    public:

    //signed is used to consider negative inputs
    //Real1, Real2 are the real parts and
    //Complex1, Complex2 are the complex parts of two numbers
    signed int Real1, Real2, Complex1, Complex2;

    Cmplx() {};

    //R1, R2 are the real parts and
    //C1, C2 are the complex parts of two numbers accepted from user
    //parameterized constructor to receive the inputs of real and imaginary number entered by user
    Cmplx (signed int R1, signed int R2, signed int C1, signed int C2) {
        Real1 = R1;
        Real2 = R2;
        Complex1 = C1;
        Complex2 = C2;
    }

    //different member functions for different arithmetic operations
    void Sum();
    void Difference();
    void Product();
};

void Cmplx :: Sum() {

    //SumReal and SumComplex are used to store the sum of real and imaginary parts respectively
    signed int SumReal = 0, SumComplex = 0;

    SumReal = Real1 + Real2;
    SumComplex = Complex1 + Complex2;

    cout<<"Sum of given complex numbers is: "<<SumReal<<" + ("<<SumComplex<<")i"<<endl;
}

void Cmplx :: Difference() {

    //DiffReal and DiffComplex are used to store the difference of real and imaginary parts respectively
    signed int DiffReal = 0, DiffComplex = 0;

    DiffReal = Real1 - Real2;
    DiffComplex = Complex1 - Complex2;

    cout<<"\nDifference of given complex numbers is: "<<DiffReal<<" + ("<<DiffComplex<<")i"<<endl;
}

void Cmplx :: Product() {

    //ProdReal and ProdComplex are used to store the product of real and imaginary parts respectively
    signed int ProdReal = 0, ProdComplex = 0;

    ProdReal = (Real1 * Real2) - (Complex1 * Complex2);
    ProdComplex = (Real1 * Complex2) + (Real2 * Complex1);

    cout<<"\nProduct of given complex numbers is: "<<ProdReal<<" + ("<<ProdComplex<<")i\n"<<endl;
}

int main() {

    //below variables are used to store the real and imaginary parts of the numbers received from user
    signed int real1 = 0, real2 = 0, complex1 = 0, complex2 = 0;

    cout<<endl;

    cin>>real1>>complex1;
    cout<<"Your first number is: "<<real1<<" + ("<<complex1<<")i\n"<<endl;
    cin>>real2>>complex2;
    cout<<"Your second number is: "<<real2<<" + ("<<complex2<<")i\n"<<endl;

    //initializing the object of the class Cmplx and passing arguments
    //to store the inputs from user in the data member of class
    Cmplx C(real1, real2, complex1, complex2);

    //calling member functions
    C.Sum();
    C.Difference();
    C.Product();

    return 0;
}