#ifndef BITMAP_H
#define BITMAP_H

#include <iostream>

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
    int TotalMarks = -1;

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
    char GetTheoryMarks();
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
    char GetThesisMarks();
    int GetTotalMarks();

    
    void CalculateMarks();

    ~ArchitectureStudent () {}
};

#endif
