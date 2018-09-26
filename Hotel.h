/*
The program's name:     	Hotel.h
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information for hotel and contains functions for the hotel
*/

#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include "Room.h"


class Hotel
{
   private:
	std::string name;
	static int count;
	Room rooms[50];
   
   public:
	Hotel();
	Hotel(std::string name);
	std::string getName();
	void setName(std::string name);
	void addRoom(Room newRoom);
	Room findRoom(std::string type);
   
};
#endif