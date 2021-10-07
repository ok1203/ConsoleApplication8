#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
private:
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
public:
	CheckingAccount() : Account() {};
	CheckingAccount(string name, vector<double> balance, double euro, double tenge, double dollars) : Account(name, balance, euro, tenge, dollars) {};
	
	bool withdraw(double sumTenge, double sumDollars, double sumEuro) {
		Account::withdraw(sumTenge*1.15, sumDollars*1.15, sumEuro*1.15);
		return 1;
	}
};