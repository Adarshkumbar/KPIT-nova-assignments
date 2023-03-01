#include<iostream>
#include<cstring>
// #include"bitmap.h"
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
int main()
{
	Account a1;
		a1.setBalance(20000);
		a1.deposite(5000);
		cout<<"Balane is :"<<a1.getBalance();
		cout<<"\n";
		a1.accept();
		a1.display();
	int i,size=5;
		Account a[5];
		for(i=0; i<5; i++)
		{
			a[i].setAccno(i);
			a[i].setBalance((i+1)*1000);
		}
		int bal=Account::getHighestBalance(a,5);
		cout<<"\nHigest balance is :"<<bal;
	cout<<"\nFound?:"<<a[0].searchAccountById(a,5,108);
	return 0;
}