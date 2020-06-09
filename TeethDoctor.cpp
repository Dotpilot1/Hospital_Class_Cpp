#include "TeethDoctor.h"
#include <stdexcept>
#include <iostream>

TeethDoctor::TeethDoctor(string _dFname, string _dLname, double _dWorkH, double _dHourlySalary, double _dFixedFee)
	:Doctor(_dFname, _dLname, _dWorkH, _dHourlySalary)
{
	setFixedFee(_dFixedFee);
}

void TeethDoctor::setFixedFee(double _dFixedFee)
{
	if (_dFixedFee < 0) {
		throw invalid_argument("Invalid Fixed Fee, must be >= 0");
	}
	fixed_fee = _dFixedFee;
}

double TeethDoctor::getFixedFee() const
{
	return fixed_fee;
}

double TeethDoctor::earnings() const
{
	return ((getWorkHour()*getHourlySalary())+(getFixedFee()*1.2));
}

void TeethDoctor::infoPrint()
{
	Doctor::infoPrint();
	cout << earnings();

}
