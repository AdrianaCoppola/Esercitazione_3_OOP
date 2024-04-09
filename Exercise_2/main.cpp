#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ComplexLibrary;

int main()
{
    double a=1.0;
    double b=2.0;
    double n=-1.2;
    ComplexNumber c1(a,b);
    cout << "Numero complesso c1: " << c1 << endl;
    ComplexNumber c2=c1.coniugato();
    cout << "Il coniugato di c1 e': " << c2 << endl;
    ComplexNumber c3(a,n);
    ComplexNumber c4=c3.coniugato();
    cout << "Il coniugato di c3 e': " << c4 << endl;
    ComplexNumber c5=c1+c3;
    cout << "c1+c3=" << c5 << endl;

    cout << "c1==c3?" << (c1==c3) << endl;
    double d=-1.500002;
    ComplexNumber c6(a,d);
    cout << "c3==c6?" << (c3==c6) << endl;

    ComplexNumber c7(n,a);
    cout << "c7:" << c7 << endl;
    ComplexNumber c8(a,0);
    cout << "c8:" << c8 << endl;
    ComplexNumber c9(0,b);
    cout << "c9:" << c9 << endl;

    return 0;
}
