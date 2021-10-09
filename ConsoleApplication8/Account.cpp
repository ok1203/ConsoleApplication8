#include "Account.h"

Account::Account()
{
	name = "Unnamed Account";
	balance = {0, 0, 0};
	euro = 0;
	dollars = 0;
	tenge = 0;
}

Account::Account(string name, vector<double> balance) {
	this->name = name;
	this->balance = balance;
	this->tenge = balance[0];
	this->euro = balance[2];
	this->dollars = balance[1];
}

vector<double> Account::getBalance()
{
	return balance;
}

const double Account::getDollars()
{
	return dollars;
}

double Account::getTenge()
{
	return tenge;
}

double Account::getEuro()
{
	return euro;
}

string Account::getName()
{
	return name;
}

void Account::setBalance(vector<double> sums)
{
	balance = sums;
}

void Account::setDollars(double sum)
{
	dollars = sum;
	balance[1] = sum;
}

void Account::setTenge(double sum)
{
	tenge = sum;
	balance[0] = sum;
}

void Account::setEuro(double sum)
{
	euro = sum;
	balance[2] = sum;
}

void Account::setName(string Name)
{
	this->name = Name;
}

