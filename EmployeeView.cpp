#include <iostream>
#include "EmployeeView.h"

void EmployeeView::printEmployeeDetails(Employee *e)
{
    std::cout << "ID: " << e->getId() << std::endl;
    std::cout << "Name: " << e->getName() << std::endl;
    std::cout << "Email: " << e->getEmail() << std::endl;
}