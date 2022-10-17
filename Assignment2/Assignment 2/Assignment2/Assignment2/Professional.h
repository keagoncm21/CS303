#pragma once
#include <iostream>
#include "Employee.h"

//creating subclass of employee, professional
class Professional : public Employee
{
private:
	int vacationdays;
	double pay = 4000;
public:
	Professional(int d = 0) : Employee(pay) //salary of employee
	{
		vacationdays = d; //parameter of professional is number of vacation days the professional employee gets
	}
	int get_vacationDays(); //for getting/returning the number of vacation days
	double get_salary(); //for getting/returning the weekly salary
	
};