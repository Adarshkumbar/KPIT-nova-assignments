#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Student::Student(){}

Student::Student(int r, const char *n, int m1, int m2, int m3, int m4, int m5) // here m1,m2,m3,m4 and m5 are marks in each subject
{
	rollno=r;
	strcpy(name,n);
	marks[0]=m1,marks[1]=m2,marks[2]=m3,marks[3]=m4,marks[4]=m5;
	
}

void Student::Accept()
{
	cout<<"Enter rollno,name and marks respectively:";
	cin>>rollno>>name;
	for(int i=0;i<=4;i++)
	{
		cin>>marks[i];
	}
}

void Student::Display()
{
	cout<<"\nStudent details are:\n";
	cout<<"Rollno:"<<rollno<<" \nName:"<<name<<"\nMarks are: ";
	for(int i=0;i<=4;i++)
	{
		cout<<marks[i]<<"\t";
	}
}
float Student::calcAverage()
{
	float avg;
	int m=0;
	for(int i=0;i<=4;i++)
	{
		m=m+marks[i];
	}
	avg=(m/5.0);
	return (avg);
}

char Student::calcGrade()
{
	char grade;
	float avg =calcAverage();
	if(avg>=60.0)
		grade='A';
	else if(avg>=50.0 && avg<60.0)
		grade='B';
	else if(avg>=40.0 && avg<50.0)
		grade='C';
	else
		grade='D';
	return grade;
}


int Student::highestMarks()
{
	int highest;
	highest=marks[0];
	for(int i=0;i<=3;i++)
	{
		if(marks[i]<marks[i+1])
			highest=marks[i+1];
	}
	return highest;
}

int Student::lowestMarks()
{
	int lowest;
	lowest=marks[0];
	for(int i=0;i<=3;i++)
	{
		if(marks[i]>marks[i+1])
			lowest=marks[i+1];
	}
	return lowest;
}



































