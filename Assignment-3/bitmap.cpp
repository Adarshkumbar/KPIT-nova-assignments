#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Account::Account()
{
	// code here
}


Account::Account(int acc, const char *n, double bal)
{
	// code here
}

void Account::accept()
{
	// code here
}


void Account::display()
{
	// code here
}

void Account::deposite(int amount)
{
	// code here
}

void Account::withdraw(int amount)
{
	// code here
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















