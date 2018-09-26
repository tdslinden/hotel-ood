/*
The program's name:     	Hotel.cpp
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information for hotel and contains functions for the hotel
*/

#include "Hotel.h"
#include "Room.h"
#include <string>
using namespace std;

int Hotel::count = 0;

//Creates a default hotel 
Hotel::Hotel()
{
	name = "Hilton";
}

//Creates a hotel given the hotel name
Hotel::Hotel(string name)
{
	this->name = name;
}

//Returns the name of the hotel
string Hotel::getName()
{
	return name;
}

//Adds a room to the hotel
void Hotel::addRoom(Room room)
{
	if(count < 50)
	{
		rooms[count] = room;
		count++;
	}
	
}

//Finds an available room for the customer based on the room type
Room Hotel::findRoom(string type)
{
	Room emptyRoom;
	for(int i = 0; i < 50; i++)
	{
		if(rooms[i].getCheck() == true && rooms[i].getType() == type)
		{
			rooms[i].setCheck();
			return rooms[i];
			break;
		}
	}
	
	return emptyRoom;
}
