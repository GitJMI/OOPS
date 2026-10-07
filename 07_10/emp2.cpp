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
		cout << "Emp Constructed" <<endl
	}
	
	
	~Emp(){
		cout<< " Emp Destructed" <<endl;
	}
	
	
	void display()
	{
		cout <<designation <<" "<<salary<<endl ;
	}

};


int main(){
	
	Emp Emp1 = Emp(1 , "Anas" , "SDE-II"  , 80677);

	//
	
	
	Emp1.display();
	Emp1.display();
	
	basePtr->display(); 	
    	
	return 0;
}
