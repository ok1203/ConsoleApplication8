#include <iostream>
#include "TrustAccount.h";
#include "CheckingAccount.h"
#include "Redistribution.h"
using namespace std;

int main()
{
    TrustAccount taccount = TrustAccount("Omar Kurbanaliyev", { 150000, 500, 32.4 }, { 15, 10, 7 });
    CheckingAccount caccount = CheckingAccount("Ilon Musk", { 0, 1000000, 0 });
    SavingsAccount saccount = SavingsAccount();
    Redistribution redis = Redistribution({ taccount, caccount, saccount });

    taccount.print();
    taccount.withdraw(50000, 0, 0);
    taccount.print();
    taccount.withdraw(0, 100, 0);
    taccount.print();
    taccount.deposit(0, 150, 0);
    taccount.print();
    caccount.print();
    caccount.withdraw(0, 1000, 0);
    caccount.print();
    saccount.print();
    taccount.print();
    redis.redistribute(150);
    caccount.print();
    saccount.print();
    taccount.print();

}
