#pragma once
#include <iostream>

class Employee
{
private: //private variable declared -if no other value is set, these are the set values
	double pay;
	double healthcaremoney = 500;
	int vacationdays = 1;
public:
	Employee(double p = 0) //employees parameter is the pay an employee gets. For professional its salary and for nonprofessional it is hourly
	{
		pay = p;
	}
	 //getters for salary/pay, healthcare money, and vacation days
	virtual double get_salary();
	virtual double get_healthcaremoney();
	virtual int get_vacationDays();
	
};


