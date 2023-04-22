#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Employee::Employee()
{
	empid=0;
	strcpy(name," ");
	basicsalary=0;
}

Employee::Employee(int id, const char *n, double sal)
{
	empid=id;
	strcpy(name,n);
	basicsalary=sal;
}

double Employee::GetBasicSalary()
{
	return basicsalary;
}

void Employee::Display()
{
	cout<<empid;
	cout<<name;
	cout<<basicsalary;
}


WageEmployee::WageEmployee()
{
	
	hours=0;
	rate=0;
}

WageEmployee::WageEmployee(int id, const char *n, double sal, int h, int r):Employee(id, n, sal)
{
	hours=h;
	rate=r;

}

double WageEmployee::CalcNetSalary()
{
	return (hours*rate)+GetBasicSalary();
}

bool WageEmployee::IsTaxable()
{
	if(CalcNetSalary()>=500000){
  return true;
	}
	else{
		return false;
	}
}
void WageEmployee::Display()
{
	Employee::Display();
	cout<<hours;
	cout<<rate;
}

SalesPerson::SalesPerson()
{
	sales=0;
	comm=0;
}
	
SalesPerson::SalesPerson(int id, const char *n, double sal, 
				int h, int r, int s, int c):WageEmployee(id,n,sal,h,r)
{
	sales=s;
	comm=c;
}

double SalesPerson::CalcNetSalary()
{
	return (sales*comm+( WageEmployee::CalcNetSalary()));
}

bool SalesPerson::IsTaxable()
{
	if(CalcNetSalary()>=500000){
       return true;
	}
	else{
		return false;
	}
}
	
void SalesPerson::Display()
{
	Employee::Display();
	WageEmployee::Display();
	cout<<sales;
	cout<<comm;
}
