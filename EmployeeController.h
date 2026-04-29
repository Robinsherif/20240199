#ifndef EMPLOYEECONTROLLER_H
#define EMPLOYEECONTROLLER_H

#include "Employee.h"
#include "EmployeeView.h"

class EmployeeController
{
private:
    Employee *e;
    EmployeeView *ev;

public:
    EmployeeController(Employee *model, EmployeeView *view);
    void setEmployeeName(std::string name);
    void setEmployeeEmail(std::string email);
    void setEmployeeId(int id);
    std::string getEmployeeName();
    std::string getEmployeeEmail();
    int getEmployeeId();
    void view();
};

#endif