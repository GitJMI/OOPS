#include <iostream>

using namespace std;
class icicib;

class indianBank{
	int acc;
	string name;
	float balance;
	
public:
	indianBank(int acc , string name ,int balance){
		this->acc = acc;
		this->name = name;
		this->balance = balance;
	}
	
	float getBalance(){
		return this->balance;
	}
	void friend transfer(indianBank &a1 , icicib &a2 , float amt);	
	void friend transfer( icicib &a2 , indianBank &a1 , float amt);	
	
	void showInfo(){
		cout << "Acc no: "<<this->acc<<endl;
		cout<<"Name: " <<this->name<<endl;
		cout<<"bal : " << this->balance<<endl<<endl;
	}
	
};


class icicib{
	float acc;
	string name;
	float balance;
	
public:
	icicib(int acc , string name,int balance){
		this->acc = acc;
		this->name = name;
		this->balance = balance;
	}
	int getBalance(){
		return this->balance;
	}	
	void friend transfer(indianBank &a1 , icicib &a2 , float amt);
	void friend transfer(icicib &a2 ,indianBank &a1  , float amt);
	void showInfo(){
		cout << "Acc no: "<<this->acc<<endl;
		cout<<"Name: " <<this->name<<endl;
		cout<<"bal : " << this->balance<<endl<<endl;
	}
	
};
	// debit  , credit , amt	
void  transfer(indianBank &a1 , icicib &a2 , float amt){

	if(a1.balance  < amt){
		cout<<"insuffucient fund"<<endl;
		return;
	}else{
		a1.balance -=amt;
		a2.balance += amt;
		cout<<"tranfered a1-> a2 succedd !"<<endl;
	}
	
	
}
void  transfer(icicib &a2 , indianBank &a1 , float amt){

	if(a1.balance  < amt){
		cout<<"insuffucient fund"<<endl;
		return;
	}else{
		a1.balance -=amt;
		a2.balance += amt;
		cout<<"tranfered a1-> a2 succedd !"<<endl;
	}
	
	
}



int main(){
	
	
	indianBank a1 = indianBank(1 , "ahmad",2000);
	icicib a2 = icicib(1,"abbas",4000);
	
	a1.showInfo();
	a2.showInfo();
	
	transfer(a1 , a2 , 200);
	a1.showInfo();
	a2.showInfo();
	transfer(a2 , a1 , 400);
	
	a1.showInfo();
	a2.showInfo();
	
	return 0;
	
}
