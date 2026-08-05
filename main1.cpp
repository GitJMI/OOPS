
#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
                this->balance  += amt;
                return balance; 
        }

        double withdraw(int amt){
                if(balance < amt){
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

void func1(Account* acc){
        while(true){
                cout<<"========"<<endl;
                std::cout<<"1.Deposit"<<std::endl;
                cout<<"2.withDraw" << endl;
                cout<<"3.Display Name and balance"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<endl<<"======="<<endl;
                int ch; 
                cout<<"Enter your choice: ";
                cin>>ch;
                // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                switch(ch){
                        case 1:
                        {       int amt;
                                cout<<"enter amount to deposit: ";
                                cin>>amt; 
                                // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 
                                double newbalance = acc->deposit(amt); 
                                cout<<"Money deposited!!"<<endl<< "new balance:"<<newbalance;
                                break;
                        }
                        case 2:
                        {
                            int amt;
                            cout<<"enter amount to deposit: ";
                            cin>>amt; 
                            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                            int isWithdraw = acc->withdraw(amt);
                            if(isWithdraw != -1){
                                cout<<"balance withdrw!!"<<endl;
                                cout<<"New balance !!"<<isWithdraw<<endl;
                                break;
                            }
                            cout<<"Insufficent balance"<<endl;
                            break;
                        }
                        case 3:
                        {
                            cout<<"Name: "<<acc->getName();
                            cout<<endl<<"Balance: "<<acc->getBalance();
                            break;
                        }
                        case 4:
                        {
                            cout<<"Exiting the program!!"<<endl;
                            break;
                        }
                        default:
                        {
                            cout<<"Enter only choice 1-4"<<endl;
                        }
                }
                        
        }
}

int main(){


        Account acc1 =  Account(01,"anas","savings",2300);

        func1(&acc1);
        return 0;
}

