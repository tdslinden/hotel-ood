/*
The program's name:     	Customer.cpp
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information about customer and has functions for customer
*/

#include "Customer.h"
#include <string>
using namespace std;

//Creates a default customer
Customer::Customer()
{
	firstName = "Linden";
	lastName = "Kyaw";
	email = "lindenkyaw@gmail.com";
}

//Creates a customer given their first name, last name, and email
Customer::Customer(string firstName, string lastName, string email)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;   
}

//Returns the customer's first name
string Customer::getFirstName()
{
	return firstName;	
}

//Returns the customer's last name
string Customer::getLastName()
{
	return lastName;
}

//Returns the customer's email
string Customer::getEmail()
{
	return email;
}

//Sets the customer's first name
void Customer::setFirstName(string firstName)
{
	this->firstName = firstName;
}

//Sets the customer's last name
void Customer::setLastName(string lastName)
{
	this->lastName = lastName;
}

//Sets the customer's email
void Customer::setEmail(string email)
{
	this->email = email;
}