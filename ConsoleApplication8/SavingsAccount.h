#pragma once
#include "Account.h"
#include "I_Printable.h"
class SavingsAccount : public Account, I_Printable
{
private: 
	vector<double> InterestRate;
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
	void bonus(double sumInVec, double sum, double InterestOfCurrency) {
		sumInVec = sumInVec * (1 + (InterestOfCurrency / 100));
		sum = sum * (1 + (InterestOfCurrency / 100));
	};
public:
	SavingsAccount() : Account() {
		InterestRate = { 15, 10, 7 };
	};
	SavingsAccount(string name, vector<double> balance, vector<double> InterestRate) : Account(name, balance) {
		this->InterestRate = InterestRate;
	};
	
	bool deposit (double sumTenge, double sumDollars, double sumEuro)
	{
		Account::deposit(sumTenge, sumDollars, sumEuro);
		bonus(balance[0], tenge, InterestRate[0]);
		bonus(balance[1], dollars, InterestRate[1]);
		bonus(balance[2], euro, InterestRate[2]);
		return 1;
	};
	void print() {
		I_Printable::print(getName(), getTenge(), getDollars(), getEuro());
	}
};

