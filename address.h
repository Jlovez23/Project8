#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>

class Address{
	private:
		std::string Street;
		std::string City;
		std::string State;
		std::string Zip;
	
	public:
		Address();
		void init(std::string Street, std::string City, std::string State, std::string Zip);
		void printAddress();
}; //end class Address


#endif
