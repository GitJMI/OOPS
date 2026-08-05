#include "account.h"

Account(int accountNum , std::string name , std::string type , double balance ){
	this->accountNum = accountNum;
	this->name = name;
	this->type = type;
	this->balance = balance;
}

double Account::deposit(int amt){
	this->balance  = amt;
	return balance;	
}

double Account::withdraw(int amt){
	if(balance <amt){
		return -1;
	}
	balance -= amt;
	return balance;
}

double Account::getBalance(){
	return this->balance;
}

std::string Account::getName(){
	return this->name;
}
