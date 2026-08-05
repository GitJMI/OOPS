#include <iostream>
#include <string>
#include <vector>

class Account{
    private:
        int accountNum;
        std::string name;
        std::string type;
        double balance;
    public:
        Account(int accountNum , std::string name , std::string type , double balance ){
        this->accountNum = accountNum;
        this->name = name;
        this->type = type;
        this->balance = balance;
        };
        
        double deposit(int amt){
                this->balance  = amt;
                return balance; 
        }
        
        double withdraw(int amt){
                if(balance <amt){
                        return -1;
                }
                balance -= amt;
                return balance;
        }
        
        double getBalance(){
                return this->balance;
        }
        
        std::string getName(){
                return this->name;
        }
        
};



int main(){
        
        Account acc1 =  Account(01,"anas","savings",2300);

        std::cout<<acc1.getBalance()<<std::endl;
        return 0;
}


