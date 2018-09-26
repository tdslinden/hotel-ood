/*
The program's name:     	TestBooking.cpp
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Test program for booking which implements other classes
*/

#include <iostream>
#include "Booking.h"
#include "Hotel.h"
#include "Customer.h"
#include "Room.h"
#include <string>
using namespace std;

int main()
{
	//Create two customers
	Customer customer1("Linden", "Kyaw", "linden-k@hotmail.com");
	Customer customer2("Michael", "Jordan", "mjordan@gmail.com");
	
	//Create three rooms
	Room room1(100, "King Suite", 605);
	Room room2(101, "Queen Suite", 410);
	Room room3(401, "Family Suite", 300);
	
	//Create two hotels
	Hotel hotel1("Shangri La");
	Hotel hotel2("Pan Pacific");
	
	//Add rooms to hotels
	hotel1.addRoom(room1);
	hotel2.addRoom(room2);
	hotel2.addRoom(room3);
	
	//Creates three bookings
	Booking booking1(hotel1, "King Suite", customer1);
	Booking booking2(hotel2, "Family Suite", customer2);
	Booking booking3(hotel1, "King Suite", customer2);
	
	//Print outs the booking ID, the name, and the room number, and whether the booking is valid
	cout << "Booking ID: " << booking1.getBookingID() << endl;
	cout <<booking1.getCustomer().getFirstName() << " " << booking1.getCustomer().getLastName() << endl;
	cout << "Your room is "<< booking1.getRoom().getRoomNum() << endl;
	cout << booking1.confirmBook() << endl;
	
	cout << "\n";
		
	cout << "Booking ID: " << booking2.getBookingID() << endl;
	cout <<booking2.getCustomer().getFirstName() << " " << booking2.getCustomer().getLastName() << endl;
	cout << "Your room is "<< booking2.getRoom().getRoomNum() << endl;
	cout << booking2.confirmBook() << endl;	
	
	cout << "\n";
	
	cout << "Booking ID: " << booking3.getBookingID() << endl;
	cout <<booking3.getCustomer().getFirstName() << " " << booking3.getCustomer().getLastName() << endl;
	cout << "Your room is "<< booking3.getRoom().getRoomNum() << endl;
	cout << booking3.confirmBook() << endl;
	return 0;
}
