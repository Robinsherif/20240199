#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
private:
    int id;
    std::string name;
    std::string email;

public:
    Employee(int id, std::string name, std::string email);
    void setName(std::string name);
    void setEmail(std::string email);
    void setId(int id);
    std::string getName();
    std::string getEmail();
    int getId();
};

#endif