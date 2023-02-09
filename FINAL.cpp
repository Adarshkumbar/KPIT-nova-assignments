#include <iostream>
#include <cmath>
#include "bitmap.h"
using namespace std;

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(int r, int i)
{
    real = r, img = i;
}

void Complex::Accept()
{
    cout<<"Enter complex number:";
    cin>>real>>img;
}

void Complex::Display()
{
    cout << "Complex number is :";
    cout << real << "+" << img << "i" << endl;
}

Complex Complex::operator+(Complex &c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

Complex Complex::operator-(Complex &c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}
Complex Complex::operator++()
{
    Complex temp;
    temp.real = ++real;
    temp.img = ++img;
    return temp;
}

Complex Complex::operator++(int)
{
    Complex temp;
    temp.real = ++real;
    temp.img = ++img;
    return temp;
}

bool Complex::operator==(Complex &c)
{
    bool flag = true;
    if ((real == c.real) && (img == c.img))
        return true;
    else
        return false;
    return flag;
}
int main()
{
    Complex c1(2,5);
    Complex c2(3,6);
    Complex c3 = c1 + c2;
    c3.Display();
    Complex c4(5,10);
    bool status = (c3 == c4);
    cout<<status;
    Complex o;
    o.Accept();
    o.Display();
    o++;
    ++o;
    o.Display();
}
