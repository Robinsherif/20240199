#include "EmployeeController.h"

EmployeeController::EmployeeController(Employee *model, EmployeeView *view)
{
    this->e = model;
    this->ev = view;
}

void EmployeeController::setEmployeeName(std::string name) { e->setName(name); }
void EmployeeController::setEmployeeEmail(std::string email) { e->setEmail(email); }
void EmployeeController::setEmployeeId(int id) { e->setId(id); }
std::string EmployeeController::getEmployeeName() { return e->getName(); }
std::string EmployeeController::getEmployeeEmail() { return e->getEmail(); }
int EmployeeController::getEmployeeId() { return e->getId(); }
void EmployeeController::view() { ev->printEmployeeDetails(e); }