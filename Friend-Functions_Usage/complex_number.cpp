#include <iostream>
using namespace std;
 class Complex
 {
    int real, imag;
    public:
    void input(int a, int b)
    {
       real =a;
       imag = b;
    }
    void display()
    {
        cout<<real;
        if(imag >= 0)
        cout<<" "<<"+"<<imag<<"i";
        else
        cout<<" "<<"-"<<-imag<<"i";
    }
    friend Complex sum (Complex c1 , Complex c2);
 };
 Complex sum(Complex c1 , Complex c2)
 {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
 }
 int main()
 {
    Complex c1,c2,c3;
    c1.input(5,-2);
    c2.input(-2,-1);
    c3 = sum(c1,c2);
    c3.display();
    return 0;
 }
