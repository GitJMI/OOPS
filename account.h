#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string.h>

class Account{
    private:
        int accountNum;
       	std:: string name;
	std::string type;
	double balance;
    public:
	Account();
	double deposit(int amt);
	double withdraw(int amt);
	
	//getters
	double getBalance();
	std::string getName();
	
};

#endif

