#pragma once
#include <iostream>
using namespace std;
class I_Printable
{
public:
	virtual void print( string name, double getTenge, double getDollars, double getEuro) {
		cout << name << " account has: " << getTenge << " tenge, " << getDollars << " dollars, " << getEuro << "euro." << endl;
	}
};

