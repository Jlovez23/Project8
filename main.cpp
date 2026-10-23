#include <iostream>
#include <vector>
#include "student.h"
#include "address.h"
#include "date.h"

/*
void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void showStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);
*/
std::string menu();

int main(){
	//std::vector<std::unique_ptr<Student>> Students;
	//loadStudents(Students);
	std::string response;
	bool keepGoing = true;

	while(keepGoing){
		response = menu();

		if (response == "0") 
			keepGoing = false;
		/*
		if (response == "1")
			showStudentNames(Students);
		if (response == "2")
			printStudents(Students);
		if (response == "3")
			findStudent(Students);
		*/
		else 
			std::cout << "invalid input please enter 0, 1, 2 or 3!";
	}//end while
}// end main

/*
void delStudent(Students){
	for(Student::Students)
		Student.~Student
}//end delStudent
*/
std::string menu(){
	std::string response
	std::cout << "press 0 to quit" << "\n";
	std::cout << "press 1 to print all student names" << "\n";
	std::cout << "press 2 to print all student data" << "\n";
	std::cout << "press 3 to find a student" << std::endl;
	response = std::cin.get();
	return response;
}//end menu
/*
void showStudentNames(Students){
}//end showStudentsNames

void printStudents(Students){
	for(student::Students)
		Student.printStudent;
}//end printStudents

void findStudent(Students){
}//end findStudent
*/
