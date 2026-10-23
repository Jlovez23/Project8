#include <iostream>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <vector>
#include <memory>
#include "student.h"
#include "address.h"
#include "date.h"


void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void showStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);
void sortStudents(std::vector<Student*>& Students);
std::string menu();
bool sortbyFname(Student* a, Student* b);
bool sortbyLname(Student* a, Student* b);
bool sortbyCredit(Student* a, Student* b);

int main(){
	std::vector<Student*> Students;
	loadStudents(Students);
	std::string response;
	bool keepGoing = true;

	while(keepGoing){
		response = menu();
		
		if (response == "0") 
			keepGoing = false;
		
		else if (response == "1")
			showStudentNames(Students);
		
		else if (response == "2")
			printStudents(Students);
		
		else if (response == "3")
			findStudent(Students);
		
		else if (response == "4")
			sortStudents(Students);
		
		else 
			std::cout << "invalid input please enter 0, 1, 2, 3 or 4!" << std::endl;
	}//end while
	delStudents(Students);
}// end main

void delStudents(std::vector<Student*>& Students){
	for(Student* Student : Students)
		delete Student;
}//end delStudent

std::string menu(){
	std::string response;
	std::cout << "press 0 to quit" << "\n";
	std::cout << "press 1 to print all student names" << "\n";
	std::cout << "press 2 to print all student data" << "\n";
	std::cout << "press 3 to find a student" << "\n";
	std::cout << "press 4 to sort students" << std::endl;
	response = std::cin.get();
	std::cin.ignore();
	return response;
}//end menu

void showStudentNames(std::vector<Student*>& Students){
	for(Student* Student : Students){
		std::cout << Student->getLastFirst() << std::endl;
	}//end for
}//end showStudentsNames

void printStudents(std::vector<Student*>& Students){
	for(Student* Student : Students)
		Student->printStudent();
}//end printStudents

void findStudent(std::vector<Student*>& Students){
	std::string search;
	bool success = false;
	std::cout << "please enter the last name of the student you are looking for!" << std::endl;
	std::getline(std::cin, search);
	std::cout << "searching for [" << search << "]" << std::endl;
	for(Student* Student : Students)
		if (Student->getLname().find(search) == 0){
			Student->printStudent();
			success = true;
			
		}//end success if for Lname
	if (success == false)
		std::cout << "Student not found." << std::endl;
}//end findStudent

void loadStudents(std::vector<Student*>& Students){
	std::ifstream inFile;
	std::string studentdata;
	inFile.open("studentdata.csv");
	if (!inFile){
		std::cout << "Failed to open studentdata.csv" << std::endl;
	}
	else
		std::cout << "File opened successfully" << std::endl;
	while(getline(inFile, studentdata)){
		Student* Stu = new Student();
		Stu->init(studentdata);
		Students.push_back(Stu);
	}//end while
}//end loadStudents

void sortStudents(std::vector<Student*>& Students){
	std::string response;

	std::cout << "please enter what to sort by!\n";
	std::cout << "enter 1 for First Name\n";
	std::cout << "enter 2 for Last Name\n";
	std::cout << "enter 3 for Credit Hours" << std::endl;

	std::getline(std::cin, response);
	
	if (response == "1")
		std::sort(Students.begin(), Students.end(), sortbyFname);
       	
	else if (response == "2")
		std::sort(Students.begin(), Students.end(), sortbyLname);

	else if (response == "3")
		std::sort(Students.begin(), Students.end(), sortbyCredit);	
	else 
		std::cout << "invalid input" << std::endl;
}

bool sortbyFname(Student* a, Student* b){
	return(a->getFname() < b->getFname());
}

bool sortbyLname(Student* a, Student* b){
	return(a->getLname() < b->getLname());
}

bool sortbyCredit(Student* a, Student* b){
	return(a->getCredit() > b->getCredit());
}
