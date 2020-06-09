#pragma once
#include <string>
using namespace std;



class Doctor {

	//friend enum class Title { PROF, ASS_PROF, EXPERT_DR, DR, ASS_DR };
public:
	Doctor(string,string,double,double);
	virtual ~Doctor() = default;

	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setWorkHour(double);
	double getWorkHour() const;

	void setHourlySalary(double);
	double getHourlySalary() const;


	virtual double earnings() const = 0;
	virtual void infoPrint();

private:
	string d_firstname;
	string d_lastname;
	double d_workHour;
	double d_HourlySalary;
};