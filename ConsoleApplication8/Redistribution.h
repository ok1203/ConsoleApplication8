#pragma once
#include "Account.h"
class Redistribution : public Account
{
private:
	vector<Account> list;
public:
	Redistribution(vector<Account> list) {
		this->list = list;
	}

	void redistribute(double tenge) {
		for (int i = 0; i < list.size(); i++) {
			list[i].Account::deposit(150,0,0);
		}
	}
};

