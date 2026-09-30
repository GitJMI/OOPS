#include <bits/stdc++.h>
using namespace std;


class Emp{
private:
	static int empIdI ;
    static int cnt ;

	int empId;
	string name;
	string dept;
	double salary;
    
public:


	Emp(){ 	
		empId = 0;
	}
	Emp(string n , string dep , double sal){
		empIdI++;
		empId = empIdI;
		name = n;
		dept = dep;
		salary = sal;
		
		cnt++;
	}
	
	int static getTotalEmp(){
		return cnt;
	}

	
	void getData(){
		string n , dep ;
		double sal;

		empIdI++;
		this->empId = empIdI;
		
		cout<<"Enter name: ";
		cin >>n;
		this->name = n;
		
		cout<<"Dept:" ;
		cin >> dep; 
		this->dept = dep;
		
		cout<<"Salary:";
		cin >> sal;
		this->salary = sal;
		
		cnt++;
		
	}
	
	int getId(){
		return empId;
	}	

    
	string getName(){
		return name;
	}
	string getDept(){
		return dept;
	}
	double getSal(){
		return salary;
	}
	
	
	void * operator new(size_t size){
		void * ptr = ::operator new(size);		
		//cout <<"object pointer Initialized"<<endl<<endl;
		return ptr;
	}
	
	void operator delete(void *ptr){
		::operator delete(ptr);
		//free(ptr);
		//cout<<"object memory and ptr are now free"<<endl<<endl;
	}
	
	void display(){
		cout<<empId << " "<<name <<" " <<dept<<" "<<salary<<endl;
	}
  
};


int Emp:: empIdI = 1000;
int Emp::cnt  = 0;

int main() {

   
    Emp** Empls = new Emp*[25];
    
    // for(int i = 0;i<2;i++){
	// 	cout<<"------NEW EMP ----"<<endl;

	// 	// storing the pointer in an arrray of pointer to Emps
	// 	Empls[i] = new Emp();
	// 	Empls[i]->getData();
		
	// 	cout<<"------------"<<endl;
    // }
	Empls[0] = new Emp("Anas","CSE",2342);
	Empls[1] = new Emp("Ahmad","CSE",56722);
	Empls[2] = new Emp("Abbas","DS", 23423);
	Empls[3] = new Emp("Atif" , "ECE", 23424);
	Empls[4] = new Emp("Aryan" , "EE", 26443);
    

 
    
    for(int i = 0;i<5;i++){
    	Empls[i]->display();
    } 
    

	//now free all the pointer to objects 
	for(int i = 0;i<5;i++){
		delete Empls[i];
	}
    
    delete[] Empls;
  

    cout<<"Total emp Created: "<<Emp::getTotalEmp()<<endl;
    
    return 0;
}
	
