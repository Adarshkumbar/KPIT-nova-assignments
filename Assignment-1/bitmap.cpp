#include<iostream>
#include<cmath>
// #include"bitmap.h"
using namespace std;
class Complex
{
	int real;
	int img;
    public:
	Complex();
	Complex(int, int);
	void Accept();
	void Display();
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	Complex operator++();
	Complex operator++(int);
	bool operator==(Complex&);
};

Complex::Complex()
{
	real=0;
	img=0;
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
	
	
	
	
	
	
