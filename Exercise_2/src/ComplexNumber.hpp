#include<iostream>
#include<cmath>
#include<fstream>
#include <Eigen/Eigen>
using namespace std;
using namespace Eigen;


struct ComplexNumber {
    double real;
    double imaginary;
    //DEFINISCO UN COSTRUTTORE
    ComplexNumber() = default;
    ComplexNumber(double a, double b):
        real(a), imaginary(b){} //inizializzo gli attributi
};


//DICHIARO LE FUNZIONI
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);
ostream& operator<<(ostream& os, const ComplexNumber& c);
ComplexNumber conjugate(const ComplexNumber& c);



