#include <iostream>

using namespace std;


class Person{
private:
	int id;
	string name;
	
public:
	Person(int id , string name){
		this->id = id ; 
		this->name = name;
	}
	
	void displayPerson(){
		cout<<id <<" " <<name <<endl;
	}

};

class Emp:public Person{
private:
	string designation;
	double salary;
	
public:
	Emp(int id , string name,string desgin , double sal):Person(id, name){
		designation = desgin;
		salary = sal; 
	}
	
	
	void displayEmp(){
		cout <<designation <<" "<<salary<<endl ;
	}

};


int main(){
	
	Emp Emp1 = Emp(1 , "Anas" , "SDE-II"  , 80677);
	
	Emp1.displayPerson();
	Emp1.displayEmp(); 	
    	
	return 0;
}
