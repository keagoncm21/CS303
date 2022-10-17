#include <iostream>
#include "NonProfessional.h"


int NonProfessional::get_vacationDays() //gets/returns the number of vacation days which is one per 80 hours for a nonprofessional employee
{
	return hours/40;			
}
double NonProfessional::get_healthcaremoney() //gets/returns the amount of healthcare money given to a nonpressoinal employee. The amount 400 per 40 hours
{
	return (hours / 40) * 200;
}
double NonProfessional::get_salary()
{
	return hours * hourlypay;
}

double NonProfessional::gethourlypay()
{
	return hourlypay;
}