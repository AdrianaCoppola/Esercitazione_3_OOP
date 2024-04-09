#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>

using namespace std;
namespace ComplexLibrary
{
struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(double a, double b){
        real=a;
        imag=b;
    }
    ComplexNumber()=default;
    ComplexNumber coniugato();
};

ostream& operator<<(ostream &os, const ComplexNumber &c);
ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);
bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);
}

#endif
