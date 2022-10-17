#include <iostream>
#include "Employee.h"

//setting up getters to return values given to the employee
double Employee::get_salary() //gets/returns salary of employee
{
	return pay;
}
double Employee::get_healthcaremoney() //gets/returns the healthcare money that goes to an employee
{
	return healthcaremoney;
}
int Employee::get_vacationDays() //gets/returns the number of vacation days that an employee is given
{
	return vacationdays;
}