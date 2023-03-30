#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Employee::Employee()
{
	//code here
}
Employee::Employee(int id, const char *n, double sal)
{
	//code here
}

double Employee::GetBasicSalary()
{
	//code here
}

void Employee::Display()
{
	//code here	
}


WageEmployee::WageEmployee()
{
	//code here
}

WageEmployee::WageEmployee(int id, const char *n, double sal, int h, int r):Employee(id, n, sal)
{
	//code here
}

double WageEmployee::CalcNetSalary()
{
	//code here
}

bool WageEmployee::IsTaxable()
{
	//code here
}
void WageEmployee::Display()
{
	//code here
}

SalesPerson::SalesPerson()
{
	//code here
}
	
SalesPerson::SalesPerson(int id, const char *n, double sal, 
				int h, int r, int s, int c):WageEmployee(id,n,sal,h,r)
{
	//code here
}

double SalesPerson::CalcNetSalary()
{
	//code here
}

bool SalesPerson::IsTaxable()
{
	//code here
}
	
void SalesPerson::Display()
{
	//code here
}

































