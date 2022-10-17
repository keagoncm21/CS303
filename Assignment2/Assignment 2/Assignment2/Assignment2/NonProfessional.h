#pragma once
#include <iostream>
#include "Employee.h"

class NonProfessional : public Employee
{
private:
	int hours;
	double hourlypay = 22.5;
public:
	NonProfessional(int h = 0) : Employee(hourlypay) //pay of nonprofessional employee
	{
		hours = h; //parameter  of nonprofessional is the number of hours they work
	}
	int get_vacationDays(); //for getting/returning the number of vacation days a nonprofessional employee gets
	double get_healthcaremoney();//for getting/returning the healthcarepay a nonprofessional employee gets
	double get_salary();//for getting/returning the weekly salary of a worker
	double gethourlypay(); //for getting/returning the hourly pay
};