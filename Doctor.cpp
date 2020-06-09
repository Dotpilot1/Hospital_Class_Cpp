#include "Doctor.h"
#include <stdexcept>
#include <iostream>
#include <sstream>


Doctor::Doctor(string _dFname,string _dLname,
	double _dWorkH,double _dHourlySalary):d_firstname{_dFname},d_lastname{_dLname}
{
	setWorkHour(_dWorkH);
	setHourlySalary(_dHourlySalary);
}

void Doctor::setFirstName(const string& _dFname)
{
	d_firstname = _dFname;
}

string Doctor::getFirstName() const
{
	return d_firstname;
}

void Doctor::setLastName(const string& _dLname )
{
	d_lastname = _dLname;
}

string Doctor::getLastName() const
{
	return d_lastname;
}

void Doctor::setWorkHour(double _dWorhH)
{
	if (_dWorhH < 0) {
		throw invalid_argument("Invalid Hour, must be >= 0");
    }
	d_workHour = _dWorhH;
}

double Doctor::getWorkHour() const
{
	return d_workHour;
}

void Doctor::setHourlySalary(double _dHourlySalary)
{
	if (_dHourlySalary < 0) {
		throw invalid_argument("Invalid Hour, must be >= 0");
	}
	d_HourlySalary = _dHourlySalary;
}

double Doctor::getHourlySalary() const
{
	return d_HourlySalary;
}



void Doctor::infoPrint()
{
	
	cout << "***Personel Info*** \n"
		 << getFirstName() << " "
		 << getLastName() << "\n"
		 << "Your Salary: ";
	   

}


