/*
The program's name:     	Room.h
Name:                            		Linden Kyaw 	
Student Number:			100263295
Date Finished:           		October 5, 2017
Purpose: 			     	Stores information for room and has functions for room
*/
#ifndef ROOM_H
#define ROOM_H
#include <string>

class Room
{
	private:
		int roomNum;
		std::string type;
		int rate;
		bool check;
	
	public:
		Room();
		Room(int roomNum, std::string type, int rate);
		int getRoomNum();
		std::string getType();
		int getRate();
		bool getCheck();
		void setCheck();	
};

#endif