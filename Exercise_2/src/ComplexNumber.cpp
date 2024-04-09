#include "ComplexNumber.hpp"
#include <iostream>
using namespace std;

namespace ComplexLibrary{

ComplexNumber ComplexNumber::coniugato()
{
    double a=real;
    double b=-imag;
    return ComplexNumber(a,b);
};
ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if (c.imag>0)
        os << c.real << "+" << c.imag << "i";
    else if (c.imag<0)
        os << c.real << c.imag << "i";
    else if (c.imag==0)
        os << c.real;
    return os;
};
ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double a=c1.real+c2.real;
    double b=c1.imag+c2.imag;
    ComplexNumber c(a,b);
    return c;
};
bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    bool boo;
    if ((abs(c1.real-c2.real)<=1.0e-12) && (abs(c1.imag-c2.imag)<=1.0e-12))
    {
        boo=true;
    }
    else
    {
        boo=false;
    }
    return boo;
};

}
