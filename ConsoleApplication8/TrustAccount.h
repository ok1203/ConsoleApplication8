#pragma once
#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;
class TrustAccount : public SavingsAccount
{
private:
	vector<double> InterestRate;
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
public:
	bool deposit(double sumTenge, double sumDollars, double sumEuro) {
		if (sumDollars >= 1000) {
			SavingsAccount::deposit(sumTenge, sumDollars + 10, sumEuro);
		}
		return 1;
	}
	bool withdraw(double sumTenge, double sumDollars, double sumEuro) {
		bool returnval = 0;
		if (sumTenge < 0.2 * SavingsAccount::getTenge()) {
			SavingsAccount::withdraw(sumTenge, 0, 0);
			returnval = 1;
		}
		else {
			cout << "You  cannot withdraw this amout of tenge!" << endl;
			returnval = 0;
		}
		if (sumDollars < 0.2 * SavingsAccount::getDollars()) {
			SavingsAccount::withdraw(0, sumDollars, 0);
			returnval = 1;
		}
		else {
			cout << "You  cannot withdraw this amout of dollars!" << endl;
			returnval = 0;
		}
		if (sumEuro < 0.2 * SavingsAccount::getEuro()) {
			SavingsAccount::withdraw(0, 0, sumEuro);
			returnval = 1;
		}
		else {
			cout << "You  cannot withdraw this amout of euro!" << endl;
			returnval = 0;
		}
		return returnval;
	}
};

