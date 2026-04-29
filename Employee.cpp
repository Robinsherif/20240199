#include "Employee.h"

Employee::Employee(int id, std::string name, std::string email)
    : id(id), name(name), email(email) {}

void Employee::setName(std::string name) { this->name = name; }
void Employee::setEmail(std::string email) { this->email = email; }
void Employee::setId(int id) { this->id = id; }
std::string Employee::getName() { return name; }
std::string Employee::getEmail() { return email; }
int Employee::getId() { return id; }