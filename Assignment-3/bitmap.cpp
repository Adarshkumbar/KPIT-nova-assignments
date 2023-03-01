#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Account::Account()
{
	//This is Default Constructor
}

Account::Account(int acc, const char *n, double bal)
{
	accno=acc,strcpy(name,n),balance=bal;
}
void Account::accept()
{
	cout<<"Enter Account Number,Name And Balance respectively:";
	cin>>accno>>name>>balance;
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
	
	for(int i=0;i<size;i++)
	{
		if(id==accounts[i].getAccno())
		{
			status=true;
			break;
		}
	}
	return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	int i=0, highestBal=int(accounts[0].getBalance());
	for(i=0;i<size;i++)
	{
		if(highestBal<accounts[i].balance)
			highestBal=accounts[i].balance;
	}
	return highestBal;
}

double Account::getLowestBalance(Account *accounts, int size)
{
	int i, lowestBal=int(accounts[0].getBalance());
	for(i=0;i<size;i++)
	{
		if(lowestBal<accounts[i].balance)
			lowestBal=accounts[i].balance;
	}	
	return lowestBal;
}