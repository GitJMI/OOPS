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
		cout << "Person Constructed "<<endl;
	}
	
	~Person(){
		cout << "Person Destucted"<<endl;
	}
	
	 void display(){
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
		cout << "Emp Constructed" <<endl;
	}
	
	
	~Emp(){
		cout<< "Emp Destructed" <<endl;
	}
	
	
	void display()
	{
		cout <<designation <<" "<<salary<<endl ;
	}

};

class Manager:public Emp{
private:
	string department;
	
public:
	Manager(int id , string name , string desgin , double sal , string dept):Emp(id ,name, desgin , sal){
		department = dept;
		cout <<"Manager Constucted" <<endl;
	}
	
	~Manager(){
		cout << "Manager Destructed" <<endl;
	}
	
	
	void displayManager(){
		cout << department <<endl;
	}

};

int main(){
	
	 //Emp1 = Emp(1 , "Anas" , "SDE-II"  , 80677);
	Manager M = Manager(1 , "Rehan" , "SDE-II"  , 80677 , "Project Manager");
	cout <<endl;
	//
	
	M.Person::display();
	M.Emp::display();
	
	M.displayManager();
	cout <<endl;
	return 0;
}
