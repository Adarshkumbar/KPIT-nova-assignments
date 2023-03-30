class Employee
{
	int empid;
	char name[20];
	double basicsalary;
public:
	Employee();
	Employee(int, const char*, double);
	double GetBasicSalary();
	void Display();
};

class WageEmployee:public Employee
{
	int hours;
	int rate;
public:
	WageEmployee();
	WageEmployee(int, const char*, double, int, int);
	double CalcNetSalary();
	bool IsTaxable();
	void Display();
};

class SalesPerson:public WageEmployee
{
	int sales;
	int comm;
public:
	SalesPerson();
	SalesPerson(int, const char*, double, int, int, int, int);
	double CalcNetSalary();
	bool IsTaxable();
	void Display();
};
