#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>

class Date{
	private:
		std::string dateString;
		int Day;
		int Month;
		int Year;
	public:
		Date();
		void init(std::string dateString);
		void printDate();
}; //end Date class


#endif
