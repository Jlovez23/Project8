#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
	Student::Fname = "";
	Student::Lname = "";
	Student::CreditHours = 0;
	DOB = new Date();
	GradDate = new Date();
	address = new Address();
} // end student construct

void Student::init(std::string Studentstr){
	std::string Fname;
	std::string Lname;
	int CreditHours;
	std::string DateString;
	std::string state;
	std::string city;
	std::string street;
	std::string zip;
	std::string temp;
	int i;
	std::stringstream converter;
	std::stringstream lineParser(Studentstr);
	getline(lineParser, Fname, ',');
	Student::Fname = Fname;
	getline(lineParser, Lname, ',');
	Student::Lname = Lname;
	getline(lineParser, street, ',');
	getline(lineParser, city, ',');
	getline(lineParser, state, ',');
	getline(lineParser, zip, ',');
	getline(lineParser, DateString, ',');
	DOB->init(DateString);
	getline(lineParser, DateString, ',');
	GradDate->init(DateString);
	address->init(street, city, state, zip);
	getline(lineParser, temp);
	converter << temp;
	converter >> CreditHours;
	Student::CreditHours = CreditHours;
}// end student init

Student::~Student(){
	delete DOB;
	delete GradDate;
	delete address;
}//end Student deconstructor

void Student::printStudent(){
	std::cout << Fname << " " << Lname << "\n";
	address->printAddress();
	std::cout << "DOB: ";
	DOB->printDate();
	std::cout << "Grad: ";
	GradDate->printDate();
	std::cout << "Credits: " << Student::CreditHours << "\n";
	std::cout << "____________________________\n";
	std::cout << std::endl;
}// end print

std::string Student::getFname(){
	return Student::Fname;
}// end getFname

std::string Student::getLname(){
	return Student::Lname;
}// end getLname

std::string Student::getLastFirst(){
	std::string LnameFname;
	LnameFname = Student::getLname() + ", " +  Student::getFname();
	return LnameFname;
}// end getLastfirst()
