#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "address.h"
#include "date.h"

class Student{
	private:
		std::string Fname;
		std::string Lname;
		int CreditHours;
		Date* DOB;
		Date* GradDate;
		Address* address;
	public:
		Student();
		~Student();
		void init(std::string Studentstr);
		void printStudent();
		std::string getLname();
		std::string getFname();
		int getCredit();
		std::string getLastFirst();
}; //end Student class


#endif
