/*
The program's name:     	Booking.cpp
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information for booking and contains functions for booking
*/

#include "Booking.h"
#include "Hotel.h"
#include "Customer.h"
#include "Room.h"
#include <string>
using namespace std;

int Booking::bookingID = 10000;

//Creates a booking for a customer given the hotel they want to stay and the type of room
Booking::Booking(Hotel& aHotel, string type, Customer aCustomer)
{
	this->aHotel = aHotel;
	this->aCustomer = aCustomer;
	aRoom = aHotel.findRoom(type);
	roomType = type;
	thisBookingID = bookingID;
	bookingID++;
}

//Returns the booking ID
int Booking::getBookingID()
{
	return thisBookingID;
}

//Returns the customer
Customer Booking::getCustomer()
{
	return aCustomer;
}

//Returns the room
Room Booking::getRoom()
{
	return aRoom;
}

//Returns the hotel
Hotel Booking::getHotel()
{
	return aHotel;
}

//Returns whether the booking is valid or invalid
string Booking::confirmBook()
{
	if(aRoom.getRoomNum() == 0)
	{
		return "Your booking is invalid";
	}
	else
	{
		return "Your booking is valid";
	}
}



