#pragma once
#include "Doctor.h"

using namespace std;

class TeethDoctor :public Doctor {
public:
	TeethDoctor(string, string, double, double, double);

	void setFixedFee(double);
	double getFixedFee() const;


	virtual double earnings() const override;
	virtual void infoPrint() override;

private:
	double fixed_fee;
};
