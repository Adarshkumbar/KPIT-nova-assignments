// #ifndef BITMAP_H
// #define BITMAP_H
#include<cstring>
#include <iostream>
using namespace std;
/*
    Base class which cannot be instantiated due to pure virtual function.
    It includes functionality and data members common to both derived classes.
*/

class Student
{
protected:
    
    //private data members
    std::string StudentName;
    std::string StudentId;
    int TotalMarks;

public:

    Student() {}

    Student(std::string name, std::string id);

    //Getter methods
    virtual void CalculateMarks()=0;
    std::string GetStudentName();
    std::string GetStudentId();
    virtual int GetTotalMarks()=0;


    char CalculateGrade();

    virtual ~Student() {}
};

/*
    EngineeringStudent derived class. It must instantiate the base class as well and also override virtual 
    functions from base class
*/
// Student ::Student(std::string name, std::string id){
    
// }
class EngineeringStudent : public Student
{
private:
    //data members unique to this class
    int PractialMarks;
    int TheoryMarks;

public:

    //Constructor
    EngineeringStudent (std::string name, std::string id,int thMarks, int prMarks);

    //Getter methods
    int GetPracticalMarks();
    int GetTheoryMarks();
    int GetTotalMarks();
    void CalculateMarks();

    ~EngineeringStudent () {}
};

/*
    ArchitectureStudent derived class. It must instantiate the base class as well and also override virtual 
    functions from base class
*/


class ArchitectureStudent : public Student
{
private:

    //data members unique to this class
    int DesignMarks;
    int ThesisMarks;

public:

    //parameterized constructor
    ArchitectureStudent (std::string name, std::string id,int dgMarks, int thMarks);
    
    int GetDesignMarks();
    int GetThesisMarks();
    int GetTotalMarks();

    
    void CalculateMarks();

    ~ArchitectureStudent () {}
};
// #include "bitmap.h"

/*
    Method to calculate and return Result Grade for Student 
*/


char Student::CalculateGrade(){
    if(TotalMarks==-1){
        return '-';
    }
    else if(TotalMarks>100)
    {
        return '#';
    }
    else if(TotalMarks>=85 && TotalMarks<=100)
    {
        return 'O';
    }
    else if(TotalMarks>=61 && TotalMarks<=84)
    {
        return 'A';
    }
     else if(TotalMarks>=40 && TotalMarks<=60)
    {
        return 'A';
    } 
    else{
        return 'F';
    }
}


/*
    This method returns the name of the student
*/

std::string Student::GetStudentName(){
    return StudentName;
}


/*
    This method returns the ID of the  student
*/

std::string Student::GetStudentId(){
    return StudentId;
}



/*
    Parameterized constructor for Engineering Student
*/

EngineeringStudent::EngineeringStudent(std::string name, std::string id,int thMarks, int prMarks){
    StudentName=name;
    StudentId=id;
    PractialMarks=prMarks;
    TheoryMarks=thMarks;
}

/*
    Method to calculate and return Total Marks for EngineeringStudent 
*/


void EngineeringStudent::CalculateMarks(){
    TotalMarks=((PractialMarks+TheoryMarks)/2);
}

/*
    Method to return Practical marks of the EngineeringStudent
*/

int EngineeringStudent::GetPracticalMarks(){
    return PractialMarks; 
}


/*
    Method to return Theory marks of the EngineeringStudent
*/

int EngineeringStudent::GetTheoryMarks(){
   return TheoryMarks;
}


/*
    Method to get total marks for engineering student
*/

int EngineeringStudent::GetTotalMarks(){
    return TotalMarks;
}


/*
    Parameterized constructor for Architecture Student
*/

ArchitectureStudent::ArchitectureStudent(std::string name, std::string id,int dgMarks, int thMarks) {
    StudentName=name;
    StudentId=id;
    DesignMarks=dgMarks;
    ThesisMarks=thMarks;
}

/*
    Method to calculate and return Total Marks for ArchitectureStudent 
*/

void ArchitectureStudent::CalculateMarks(){
    TotalMarks=((DesignMarks+ThesisMarks)/2); 
}

/*
    Method to return Design marks of the ArchitectureStudent
*/

int ArchitectureStudent::GetDesignMarks(){
   return DesignMarks;
}

/*
    Method to return Thesis marks of the ArchitectureStudent
*/
int ArchitectureStudent::GetThesisMarks(){
    return ThesisMarks;
}

/*
    This method returns the total marks for architecture student
*/

int ArchitectureStudent::GetTotalMarks(){
   return TotalMarks;
}
int main(){
EngineeringStudent S1("Adie","002",95,98);
cout<<"Student Name is:"<<S1.GetStudentName()<<endl;
cout<<"\nStudent Name is:"<<S1.GetStudentId()<<endl;
cout<<"\nStudent Name is:"<<S1.GetTheoryMarks()<<endl;
cout<<"\nStudent Name is:"<<S1.GetTheoryMarks()<<endl;
cout<<"\nStudent Name is:"<<S1.CalculateMarks()<<endl;
cout<<"\nStudent Name is:"<<S1.CalculateGrade()<<endl;
return 0;
}