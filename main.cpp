#include "account.h"
using namespace std;
void func1(Account* acc){
	while(true){
		cout<<"========"<<endl;
		std::cout<<"1.Deposit"<<std::endl;
		cout<<"2.withDraw" << endl;
		cout<<"3.Display Name and balance"<<endl;
		cout<<endl<<"======="<<endl;
		int ch; 
		cout<<"Enter your choice: ";
		cin>>ch;
	   	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		switch(ch):
			case 1:
			{	int amt;
				cout<<"enter amount to deposit: ";
				cin>>amt;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				double newbalance = acc->deposit(amt);
				cout<<"Money deposited!!"<<endl<< "new balance:"<<newbalance;
				break;
			}
			case 2:
}

int main(){
	

	Account acc1 =  Account(01,"anas","savings",2300);
	

	cout<<acc1.getBalance()<<endl;
	return 0;
}
