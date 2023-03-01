#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

class Account
{
	int accno;
	char name[20];
	double balance;
public:
	Account();
	Account(int, const char*, double);
	void accept();
	void display();
	void deposite(int);
	void withdraw(int);
	int getAccno();
	char* getName();
	double getBalance();
	void setAccno(int);
	void setName(const char*);
	void setBalance(double);
	static bool searchAccountById(Account *, int, int);
	static double getHighestBalance(Account*,int);
	static double getLowestBalance(Account*,int);
};

Account::Account()
{
	//This is Default Constructor
	accno=0,name="",balance=0.0;
}

Account::Account(int acc, const char *n, double bal)
{
	accno=acc,strcpy(name,n),balance=bal;
}
void Account::accept()
{

}


void Account::display()
{
	cout<<"Account number:"<<accno<<"\n"<<"Name:"<<name<<"\n"<<"Balance:"<<balance;
}

void Account::deposite(int amount)
{
	balance=balance+amount;
}

void Account::withdraw(int amount)
{
	balance=balance-amount;
}

int Account::getAccno()
{
	return accno;
}
	
char* Account::getName()
{
	return name;
}

double Account::getBalance()
{
	return balance;
}

void Account::setAccno(int id)
{
	accno=id;
}

void Account::setName(const char *n)
{
	strcpy(name,n);
}

void Account::setBalance(double bal)
{
	balance=bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
	bool status=false;
	
	// code here
	
	return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	int i, highestBal;
	
	// code here
	
	return highestBal;
}


double Account::getLowestBalance(Account *accounts, int size)
{
	int i, lowestBal;
	
	// code here
		
	return lowestBal;
}
