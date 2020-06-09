#include "EyeDoctor.h"
#include <stdexcept>
#include <iostream>

using namespace std;
EyeDoctor::EyeDoctor(string _dFname , string _dLname, double _dWorkH, double _dHourlySalary, double _dFixedFee)
	:Doctor(_dFname,_dLname,_dWorkH,_dHourlySalary)
{
	setFixedFee(_dFixedFee);
}

void EyeDoctor::setFixedFee(double _dFixedFee)
{
	if (_dFixedFee < 0) {
		throw invalid_argument("Invalid Fixed Fee, must be >= 0");
	}
	fixed_fee = _dFixedFee;
}

double EyeDoctor::getFixedFee() const
{
	return fixed_fee;
}

double EyeDoctor::earnings() const
{
	return ((getWorkHour() * getHourlySalary()) + (getFixedFee() * 1.5));
}

void EyeDoctor::infoPrint()
{
	Doctor::infoPrint();
		cout << earnings();
}
