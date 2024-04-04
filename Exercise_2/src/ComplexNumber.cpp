#include<iostream>
#include"ComplexNumber.hpp"
#include<cmath>

//RIDEFINISCO L'OPERATORE +
ComplexNumber operator + (const ComplexNumber& c1, const ComplexNumber& c2)
{
    double real_sum = c1.real + c2.real;
    double imaginary_sum = c1.imaginary + c2.imaginary;
    ComplexNumber c(real_sum, imaginary_sum);
    return c;
}


//VALUTO L'ERRORE RELATIVO PER DEFINIRNE L'UGUAGLIANZA
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double tol = 1e-15;
    double diff_real = abs(c1.real - c2.real);
    double diff_imag = abs(c1.imaginary - c2.imaginary);
    double max_val = max({abs(c1.real), abs(c1.imaginary), abs(c2.real), abs(c2.imaginary)});

    return (diff_real <= tol * max_val) && (diff_imag <= tol * max_val);
}

//STAMPO IL NUMERO COMPLESSO
ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if (c.imaginary > 0)
    {
        os << c.real << "+" << c.imaginary << "i";
    }
    else
    {
        os << c.real << c.imaginary << "i";
    }
    return os;
}


//DEFINISCO IL CONIUGATO
ComplexNumber conjugate(const ComplexNumber& c)
{
    ComplexNumber coniugato(c.real, -c.imaginary);
    return coniugato;
}
