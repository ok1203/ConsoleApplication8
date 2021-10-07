#pragma once
using namespace std;
#include <string>
#include <vector>

class Account
{
private:
	vector<double> balance;
	double dollars;
	double euro;
	double tenge;
	string name;
public:
	explicit Account();
	explicit Account(string name, vector<double> balance, double euro, double tenge, double dollars);
	virtual bool withdraw(double sumTenge, double sumDollars, double sumEuro)
	{
		vector<double> temp = { getTenge() - sumTenge, getDollars() - sumDollars, getEuro() - sumEuro };
		setBalance(temp);
		setTenge((temp)[0]);
		setDollars(temp[1]);
		setEuro(temp[2]);
		return 1;
	};
	virtual bool deposit (double sumTenge, double sumDollars, double sumEuro)
	{
		vector<double> temp = { getTenge() + sumTenge, getDollars() + sumDollars, getEuro() + sumEuro };
		setBalance(temp);
		setTenge((temp)[0]);
		setDollars(temp[1]);
		setEuro(temp[2]);
		return 1;
	};
	vector<double> getBalance();
	double getDollars();
	double getTenge();
	double getEuro();
	string getName();
	void setBalance(vector<double> sums);
	void setDollars(double sum);
	void setTenge(double sum);
	void setEuro(double sum);
	void setName(string Name);
};

