#include "EmployeeController.h"
#include "EmployeeView.h"
#include "Employee.h"
#include <iostream> 
int main()
{
    Employee *model = new Employee(20201001, "Robin", "test@example.com");
    EmployeeView *view = new EmployeeView();
    EmployeeController controller(model, view);

    controller.view();

    controller.setEmployeeName("Robin Sherif");
    controller.setEmployeeEmail("rs1001@uni.edu");

    controller.view();

    delete model;
    delete view;

    std::cin.get();
    return 0;
}