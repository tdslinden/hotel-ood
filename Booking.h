/*
The program's name:     	Booking.h
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information for booking and contains functions for booking
*/

#ifndef BOOKING_H
#define BOOKING_H
#include "Hotel.h"
#include "Customer.h"
#include "Room.h"
#include <string>

class Booking
{
	private:
		int id;
		Hotel hotels[50];
		static int bookingID;
		int thisBookingID;
		Hotel aHotel;
		Room aRoom;
		Customer aCustomer;
		std::string roomType;
	
	public:	
		Booking(Hotel& aHotel, std::string type, Customer aCustomer);
		int getBookingID();
		Customer getCustomer();
		Room getRoom();
		Hotel getHotel();
		std::string confirmBook();
};
#endif