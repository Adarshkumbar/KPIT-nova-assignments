#include "bitmap.h"

/*
    Parameterized Constructor for Employee
*/

Employee::Employee(std::string id, std::string name, float salary, int plCount, int plClaimed){
  
}

/*
  The function accepts a string value and sets it as the EmployeeName
*/

void Employee::ChangeName(std::string newName){
    
}

/*
    The function calculates reimbursement in following steps

    1) Divide EmployeeSalary by 30 to get daily salary for Employee
    2) Take difference between Paid leaves allocated and Paid leaves Claimed
    3) Multiply daily salary of employee with the difference from step 2
*/

int Employee::CalculateLeavesReimbursement(){
   
}

/*
    This function returns the count of paid leaves allocated to an employee
*/

int Employee::GetPaidLeavesCount(){
   
}

/*
    This function returns the count of paid leaves claimed by an employee
*/

int Employee::GetClaimedPaidLeavesCount(){
  
}

/*
    This function returns the name of the employee
*/
std::string Employee::GetEmployeeName(){
   
}

/*
    This function returns the ID of the employee
*/

std::string Employee::GetEmployeeId(){
   
}


/*
    This function returns the salary of the employee
*/

float Employee::GetEmployeeSalary(){
  
}


/*
    This function returns the department of the Manager
*/

std::string Manager::GetManagerDepartment(){
   
}

/*
    This function returns the count of projects completed under the Manager
*/

int Manager::GetProjectsCompletedCount(){
    
}

/*
    Parameterized Constructor for Manager
*/
    
Manager::Manager (std::string id, std::string name, float salary, int plCount, 
        int plClaimed, int projects,std::string department) : Employee (id,name,salary,plCount,plClaimed)
{
                      
}

/*
    Calculate the bonus as salary of Manager employee multiplied by projects completed under their supervison
    Type cast to integer as mentioned in the problem statement description
*/

int Manager::CalculateBonus(){

}