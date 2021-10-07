#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
private: 
	vector<double> InterestRate;
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
public:
	SavingsAccount() : Account() {
		InterestRate = { 15, 10, 7 };
	};
	SavingsAccount(string name, vector<double> balance, double euro, double tenge, double dollars, vector<double> InterestRate) : Account(name, balance, euro, tenge, dollars) {
		this->InterestRate = InterestRate;
	};
	void bonus(double sumInVec, double sum, double InterestOfCurrency) {
		sumInVec = sumInVec * (1 + (InterestOfCurrency / 100));
		sum = sum * (1 + (InterestOfCurrency / 100));
	};
	bool deposit (double sumTenge, double sumDollars, double sumEuro)
	{
		Account::deposit(sumTenge, sumDollars, sumEuro);
		bonus(balance[0], tenge, InterestRate[0]);
		bonus(balance[1], dollars, InterestRate[1]);
		bonus(balance[2], euro, InterestRate[2]);
		return 1;
	};
};

