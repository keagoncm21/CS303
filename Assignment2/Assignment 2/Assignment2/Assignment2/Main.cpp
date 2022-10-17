//Name: Keagon Madison
//Class: CompSci 303
//Date: 10/16/2022
//I was a little confused if everything should be weekly or monthly, so I made it all weekly. 
//The Professional class has more set values since professional workers should get a set amount for their pay and benefits.
#include <iostream>
#include "Employee.h"
#include "NonProfessional.h"
#include "Professional.h"

using namespace std;

int main()
{
	//declaring classes
	Professional professional(2); //user inputs set number of vacation days
	NonProfessional nonProfessional(40); //user inputs hours worked

	//outputting to test the abstract class
	cout << "Professional:" << endl;
	cout << "Weekly Salary: " << professional.get_salary() << endl
		<< "Vacation Days Received Weekly: " << professional.get_vacationDays() << endl
		<< "Healthcare Money Received Weekly: " << professional.get_healthcaremoney();
	cout << endl << endl;
	cout << "NonProfessional: "<< endl;
	cout << "Weekly Salary: " << nonProfessional.get_salary() << endl
		<< "Hourly Rate: " << nonProfessional.gethourlypay() << endl
		<< "Vacation Days Earned in a Week: " << nonProfessional.get_vacationDays() << endl
		<< "Healthcare Money Earned in a Week: " << nonProfessional.get_healthcaremoney();
	cout << endl << endl;

	

}