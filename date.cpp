#include <string>
#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	Day=0;
	Month=0;
	Year=0;
}//end Date construct


void Date::init(std::string dateString){
	std::stringstream converter;
	std::string temp;
	int Day;
	int Month;
	int Year;
	std::stringstream lineParser(dateString);
	getline(lineParser, temp, '/');
       	converter.str("");
	converter << temp;
	converter >> Month;
	Date::Month = Month;
	converter.clear();
	converter.str("");
	getline(lineParser, temp, '/');
	converter << temp;
	converter >> Day;
	Date::Day = Day;
	converter.clear();
	converter.str("");
	getline(lineParser, temp);
	converter << temp;
	converter >> Year;
	Date::Year = Year;
}// end date init

void Date::printDate(){
	static const std::string monthName[] = {
		"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	}; // end monthName array def
	std::cout << monthName[Date::Month - 1] << " ";
       	std::cout << Date::Day << ", ";
	std::cout << Date::Year;	
	std::cout << std::endl;
}//end print
