#include <bits/stdc++.h>
using namespace std;


class Emp{
private:
	int empId;
	string name;
	string dept;
	double salary;
    
public:

	Emp(){ 	
		empId = 0;
	}
	Emp(int &empIdI , string n , string dep , double sal,int &cnt){
		empIdI++;
		empId = empIdI;
		name = n;
		dept = dep;
		salary = sal;
		
		cnt++;
	}
	
	
	void setId(id ){
		empId = id;
	}
	
	void getData(int id){
		string n , dep ;
		double sal;
		
		this.empId = id;
		
		cout<<"Enter name: ";
		cin >>n;
		this.name = n;
		
		cout<<"Dept:" ;
		cin >> dep; 
		this.dept = dep;
		
		cout<<"Salary:";
		cin >> sal;
		this.salary = sal;
		
		
		
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
		free(ptr);
		//cout<<"object memory and ptr are now free"<<endl<<endl;
	}
	
	void display(){
		cout<<empId << " "<<name <<" " <<dept<<" "<<salary<<endl;
	}
  
};


int main() {

    int empIdI = 1000;
    int cnt = 0;
    //vector<Emp> Empls;
    Emp *Empls = new Emp[25];
    
    
    //Empls.push_back(*ptr);
    Emp *ptr;
    
    for(int i = 0;i<4;i++){
    	ptr = new Emp(empIdI,"anas","computer", 3255,cnt); 
    	Empls[i] = *ptr; 
    	//ptr->display();
    	delete ptr;
    }
    
     	ptr = new Emp(empIdI,"Ramesh","ECE", 55145,cnt); 
   	Empls[1] = *ptr;   	
	delete ptr;
    
  	ptr = new Emp(empIdI,"Shameem ","CSE", 99999,cnt);
  	Empls[2] = *ptr;
  	delete ptr;
 
 
    
    for(int i = 0;i<4;i++){
    	ptr = &Empls[i];
    	ptr -> display();
    	delete ptr;
    } 
    
    
    delete[] Empls;
  //  ptr = new Emp(empIdI,"anas","computer", 3255,cnt); 
   // Emp[0] = 
   // ptr->display();
  //  delete ptr;
    //
    
   // ptr = new Emp(empIdI,"Ramesh","ECE", 55145,cnt); 
    
   // ptr->display();
   // delete ptr;
    
  //  ptr = new Emp(empIdI,"Shameem ","CSE", 99999,cnt); 
    
   // ptr->display();
   // delete ptr;

    cout<<"Total emp Created: "<<cnt<<endl;
    
    return 0;
}
	
