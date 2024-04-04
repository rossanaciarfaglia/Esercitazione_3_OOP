#include<iostream>
#include"ComplexNumber.hpp"
#include<complex>
using namespace std;
int main()
{
    double a = 2500.50; double b = -3500.76;
    double c = 2500.50; double d = -3500.76;
    ComplexNumber c1(a,b);
    ComplexNumber c2(c,d);
    //STAMPO I DUE NUMERI COMPLESSI
    cout<<"primo numero c1: "<<c1<<endl;
    cout<<"secondo numero c2: "<<c2<<endl;

    //EFFETTUO LA SOMMA
    ComplexNumber sum = c1+c2;
    cout<<"la somma dei due numeri complessi risulta: "<<sum<<endl;

    //CONTROLLO L'EVENTUALE UGUAGLIANZA
    bool uguaglianza = c1 == c2;
    if (uguaglianza == 1)
    { cout<<"--> risulta vero che i due numeri sono uguali"<<endl<<endl;}
    else {cout<<"--> risulta falso che i due numeri sono uguali"<<endl<<endl;}

    //EFFETTUO LA VALUTAZIONE DEL CONIUGATO
    ComplexNumber z1 = conjugate(c1);
    cout<<"coniugato di c1: "<<z1<<endl;
    ComplexNumber z2 = conjugate(c2);
    cout<<"coniugato di c2: "<<z2<<endl;
    return 0;
}
