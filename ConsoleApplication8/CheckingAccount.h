#pragma once
#include "Account.h"
#include "I_Printable.h"
class CheckingAccount : public Account, I_Printable
{
private:
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
public:
	CheckingAccount() : Account() {};
	CheckingAccount(string name, vector<double> balance) : Account(name, balance) {};
	
	bool withdraw(double sumTenge, double sumDollars, double sumEuro) {
		Account::withdraw(sumTenge*1.15, sumDollars*1.15, sumEuro*1.15);
		return 1;
	}
	void print() {
		I_Printable::print(getName(), getTenge(), getDollars(), getEuro());
	}
};