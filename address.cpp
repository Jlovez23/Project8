#include <string>
#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
	Address::Street="";
	Address::City="";
	Address::State="";
	Address::Zip="";
} //end address constructor

void Address::init(std::string Street, std::string City, std::string State, std::string Zip){
	this->Street = Street;
	this->City = City;
	this->State = State;
	this->Zip = Zip;	
} //end address initializer

void Address::printAddress(){
	std::cout << Address::Street << "\n";
	std::cout << Address::City << " " << Address::State << ", " << Address::Zip;
	std::cout << std::endl;
} //end print
