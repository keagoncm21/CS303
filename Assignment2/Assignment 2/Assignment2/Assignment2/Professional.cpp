#include <iostream>
#include "Professional.h"

int Professional::get_vacationDays() //gets/returns the number of vacation days of a professional employee
{
	return vacationdays;
}
double Professional::get_salary()
{
	return pay / 4; //about 4 weeks in a month so I am dividing the pay by 4 to represent weekly salary
}