//	23/09/2026

#include <iostream>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public:
	Date(){
		day = 0;
		month = 0;
		year  = 0;
	}
	
	Date(int d , int m , int y ){
		day = d;
		month = m; 
		year = y;
	}
	
	
	bool leapYear();
	bool isValid();
	bool operator <(Date &d1);
	bool operator >(Date &d1);
	bool operator ==(Date &d1);
	bool operator != (Date &d1);
	void display();
	void Validate();	
	

	
};



void Date::display(){
	cout <<day<<"/"<<month<<"/"<<year;
}

void Date::Validate(){
	bool isValid = Date::isValid();
	Date::display();
	if(isValid){
		cout <<" is a valid Date";
	}else{
		cout <<" is not a Valid Date";
	}
	cout <<endl;
}

bool Date::leapYear(){
	if(year%100 != 0 && year % 4 == 0){
		return true;
	}
	else if(year %100 == 0 && year%400 == 0){
		return true;
	} 
	
	return false;
}

bool Date::isValid(){
	// 1 -> represents 31 days , except idx1
	int mDays[12] = {1,0,1,0,1,0,1,0,1,0,1};
	//feb month days
	int dm = 28;
	int m = month;
	
	if(1<=m && m <= 12){
		if(m == 2){
			if(Date::leapYear()){
				dm = 29;
			}else{
				dm = 28;
			}
		}
		else if (mDays[m-1] == 1){
			dm = 31;
		}
		else if(mDays[m-1] == 0){
			dm = 30;
		}
	}else{
		return false;
	}
	
	if(1<= day && day<=dm){
		return true;
	}
	
	return false;
}


bool Date::operator <(Date &d1){
	if(year < d1.year){
		cout <<"log"<<endl;
		return true;
	}
	else if(year == d1.year){
		if(month < d1.month){
			cout <<"log2"<<endl;
			return true;
		}else if (month == d1.month){
			if(day < d1.day){
				cout <<"log3"<<endl;
				return true;
			}
		}
	}
	return false;
}


bool Date::operator >(Date &d1){
	if(year > d1.year){
		return true;
	}
	else if(year == d1.year){
		if(month > d1.month){
			return true;
		}else if (month == d1.month){
			if(day > d1.day){
				return true;
			}
		}
	}
	return false;
}

bool Date::operator ==(Date &d1){
	if(year == d1.year){
		if(month == d1.month){
			if(day == d1.day){
				return true;
			}
		}
	}
	return false;
}

bool Date::operator != (Date &d1){
	if(year != d1.year){
		return true;
	}
	else if(month != d1.month){
		return true;
	}
	else if (day != d1.day){
		return true;
	}
	
	return false;
}


int main(){

	Date day1 = Date(28,3,2029);
	Date day2 = Date(27,2,2028);
	Date day3 = Date(28,2,2028);
	Date day4 = Date(29,2,2029);	
	Date day5 = Date(3 , 22 , 2026);
	
	
	day1.Validate();
	day3.Validate();
	day4.Validate();
	day5.Validate();
	
	
	day1.display();
	cout<<endl;
	
	cout << (day1 > day2)<<endl;
	cout << (day1 != day2)<<endl;
	cout << (day1 == day2)<<endl;
	cout << (day1 < day2)<<endl;
		
	return 0;
}
