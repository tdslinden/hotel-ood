/*
The program's name:     	Customer.h
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information about customer and has functions for customer
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
	private:
		std::string firstName;
		std::string lastName;
		std::string email;
	
	public:
		Customer();
		Customer(std::string firstName, std::string lastName, std::string email);
		std::string getFirstName();
		std::string getLastName();
		std::string getEmail();
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setEmail(std::string email);
};
#endif