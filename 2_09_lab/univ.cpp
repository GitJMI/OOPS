#include <iostream>

using namespace std;

class Student{
	int st_id;
	string name;
	
	
public:
	Student(int st_id , string name ){
		this->st_id  = st_id;
		this-> name = name;
	}	
	
	
	
};


class Course{
	int c_id;
	string c_name;
	int maxSt = 30;
	int currentPtr = 0;
	Student students[30];
	
public:	
	Course(int c_id , string c_name){
		this->c_id = c_id ; 
		this-> c_name = c_name;
	}
	
	void addStudent(Student &s1){
		this.students[currentPtr] = *s1;
		currentPtr++;
		
	}

};


void enroll(Student &s1 , Course &c1){
	if(c1.currentPtr >= maxSt){
		cout<<"Seats are full ";
	}else{
		c1.addStudent(s1);
		cout<<"Enrolled";
	}
}


int main(){
	Student s1 = Student(1 , "ahmad" );
	Student s2 = Student(2 , "Abbas" );
	
	
	Course c1 = Course(1 , "Mathematics");
	
	enroll(s1 , c1);
	enroll(s2 , c1);
		
	return 0;
}
